/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:47:17 by zsahin            #+#    #+#             */
/*   Updated: 2022/08/18 13:48:06 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *fmt, ...);
int	ft_format(const char fmt, va_list arg);
int	put_char(int c);
int	put_str(char *s);
int	put_ptr(unsigned long long p);
int	put_hex(unsigned int nbr, char fmt);
int	put_nbr(int nbr);
int	put_uint(unsigned int nbr);

#endif
