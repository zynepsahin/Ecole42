/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:00:14 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/18 14:00:16 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int nbr)
{
	if (nbr == -2147483648)
		return (put_str("-2147483648"));
	else if (nbr < 0)
		return (put_char('-') + put_nbr(-nbr));
	else if (nbr > 9)
		return (put_nbr(nbr / 10) + put_nbr(nbr % 10));
	return (put_char(nbr + '0'));
}
