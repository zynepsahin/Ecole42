/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:00:32 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/18 15:12:50 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_rest(unsigned long long p)
{
	if (p > 15)
		return (ptr_rest(p / 16) + ptr_rest(p % 16));
	return (put_char("0123456789abcdef"[p]));
}

int	put_ptr(unsigned long long ptr)
{
	return (put_str("0x") + ptr_rest(ptr));
}
