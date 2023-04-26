/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsahin <zsahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:24:04 by zsahin            #+#    #+#             */
/*   Updated: 2022/12/12 16:24:08 by zsahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	long	i;
	long	result;
	int		sing;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (str[i] - 48) + (result * 10);
		if (result > 2147483647 && sing == 1)
			return (-1);
		else if (result > 2147483648 && sing == -1)
			return (0);
		i++;
	}
	return (sing * result);
}

void	bit_shift(int pid, char c)
{
	int	bit;

	bit = 0;
	if (pid == -1)
		return ;
	while (bit < 8)
	{
		if (c & (0x80 >> bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

int	check_pid(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
		{
			ft_printf("./client <pid> <message>");
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac == 3)
	{
		if (check_pid(av[1]))
			return (0);
		pid = ft_atoi(av[1]);
		while (av[2][i])
		{
			bit_shift(pid, av[2][i]);
			i++;
		}
	}
	else
		ft_printf("./client <pid> <message>");
}
