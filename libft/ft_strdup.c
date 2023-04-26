/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:25:23 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/07 13:50:00 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*  The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s1) + 1;
	new = malloc(len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s1, len));
}
