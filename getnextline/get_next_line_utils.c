/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:12 by zsahin            #+#    #+#             */
/*   Updated: 2022/09/26 15:23:49 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *str, int c)
{
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*word;
	int		i;
	int		j;
	int		length;

	length = ft_strlen(str1) + ft_strlen(str2);
	i = 0;
	j = 0;
	if (!str1)
	{
		str1 = (char *)malloc(sizeof(char));
		str1[0] = '\0';
	}
	word = (char *)malloc(sizeof(char) * (length + 1));
	while (str1[i] != '\0')
		word[j++] = str1[i++];
	i = 0;
	while (str2[i] != '\0')
		word[j++] = str2[i++];
	word[j] = '\0';
	free(str1);
	return (word);
}

char	*ft_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (0);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_left_line(char *str)
{
	char	*newline;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (0);
	}
	newline = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!newline)
		return (0);
	j = 0;
	i++;
	while (str[i] != '\0')
		newline[j++] = str[i++];
		newline[j] = '\0';
	free(str);
	return (newline);
}
