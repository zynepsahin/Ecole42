/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:26:03 by zsahin            #+#    #+#             */
/*   Updated: 2022/09/23 14:16:29 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "stdlib.h"
# include "fcntl.h"
# include "unistd.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*ft_read(int fd, char *str);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		ft_strchr(char *str, int c);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_line(char *str);
char	*ft_left_line(char *str);

#endif
