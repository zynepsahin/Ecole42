/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:15:22 by zsahin            #+#    #+#             */
/*   Updated: 2022/09/26 15:21:21 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *str)
{
	char	*tmpstr;
	int		readed;

	tmpstr = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!tmpstr)
		return (0);
	readed = 1;
	while (readed != 0 && !ft_strchr(str, '\n'))
	{
		readed = read(fd, tmpstr, BUFFER_SIZE);
		if (readed == -1)
		{
			free(tmpstr);
			return (0);
		}
		tmpstr[readed] = '\0';
		str = ft_strjoin(str, tmpstr);
	}
	free(tmpstr);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (0);
	str = ft_read(fd, str);
	if (!str)
		return (0);
	line = ft_line(str);
	str = ft_left_line(str);
	return (line);
}
