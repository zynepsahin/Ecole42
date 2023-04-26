/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_uint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:01:20 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/18 14:01:21 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_uint(unsigned int nbr)
{
	if (nbr > 9)
		return (put_uint(nbr / 10) + put_uint(nbr % 10));
	return (put_char(nbr + '0'));
}
