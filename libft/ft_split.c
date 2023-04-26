/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:11:28 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/02 18:11:29 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordsize(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != 0)
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}	
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	size_t	index;
	size_t	size;

	word = (char **)malloc(sizeof(char *) * (wordsize(s, c) + 1));
	if (!word || !s)
		return (NULL);
	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			size = 0;
			while (*(s + size) && *(s + size) != c)
			size++;
			word[index++] = ft_substr(s, 0, size);
			s += size;
		}
	}
	word[index] = 0;
	return (word);
}
