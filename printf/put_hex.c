/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:59:57 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/18 13:59:58 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hex(unsigned int nbr, char fmt)
{
	if (nbr >= 16)
		return (put_hex(nbr / 16, fmt) + put_hex(nbr % 16, fmt));
	if (fmt == 'x')
		return (put_char("0123456789abcdef"[nbr]));
	return (put_char("0123456789ABCDEF"[nbr]));
}
