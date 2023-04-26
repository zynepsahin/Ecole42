/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:16:55 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/02 20:14:27 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if (!dst && !src)
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (dst < src)
		while (len--)
			*dstc++ = *srcc++;
	else
	{
		srcc = (unsigned char *)src + (len -1);
		dstc = (unsigned char *)dst + (len -1);
		while (len--)
			*dstc-- = *srcc--;
	}
	return (dst);
}
