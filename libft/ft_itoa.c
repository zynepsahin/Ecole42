/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:00:37 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/02 18:24:39 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findlen(long nn, int len)
{
	while (nn > 9)
	{
		len++;
		nn /= 10;
	}
	return (len);
}

static void	putnumber(char *str, int len, long nn, int neg)
{
	str[len--] = '\0';
	while (nn > 9)
	{
		str[len] = (nn % 10) + 48;
		len--;
		nn /= 10;
	}
	str[len--] = (nn % 10) + 48;
	if (neg == -1)
		str[len] = '-';
}

char	*ft_itoa(int nbr)
{
	int		neg;
	long	nn;
	int		len;
	char	*str;

	nn = (long)nbr;
	neg = 1;
	len = 1;
	if (nn < 0)
	{
		neg = -1;
		nn *= -1;
		len++;
	}
	len = findlen(nn, len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	putnumber(str, len, nn, neg);
	return (str);
}
