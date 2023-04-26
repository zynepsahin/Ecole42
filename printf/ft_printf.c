/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:36:36 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/18 14:02:41 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char fmt, va_list arg)
{
	if (fmt == 'c')
		return (put_char(va_arg(arg, int)));
	else if (fmt == 's')
		return (put_str(va_arg(arg, char *)));
	else if (fmt == 'd' || fmt == 'i')
		return (put_nbr(va_arg(arg, int)));
	else if (fmt == 'u')
		return (put_uint(va_arg(arg, unsigned int)));
	else if (fmt == 'p')
		return (put_ptr(va_arg(arg, unsigned long long)));
	else if (fmt == 'x' || fmt == 'X')
		return (put_hex(va_arg(arg, unsigned int), fmt));
	else if (fmt == '%')
		return (put_char('%'));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	arg;
	int		total;

	total = 0;
	va_start(arg, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
			total += ft_format(*(++fmt), arg);
		else
			total += put_char(*fmt);
		fmt++;
	}
	va_end(arg);
	return (total);
}
