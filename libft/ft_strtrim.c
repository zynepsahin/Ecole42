/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:37:31 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/02 20:16:11 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_control(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*dizi;

	i = 0;
	j = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && ft_control(set, s1[i]))
		i++;
	while (len > i && ft_control(set, s1[len - 1]))
		len--;
	dizi = malloc(sizeof(char) * (len - i + 1));
	if (!dizi)
		return (NULL);
	while (i < len)
		dizi[j++] = s1[i++];
	dizi[j] = '\0';
	return (dizi);
}
