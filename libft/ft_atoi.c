/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piow00 <piow00@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:41:18 by aboymond          #+#    #+#             */
/*   Updated: 2022/03/23 14:57:37 by piow00           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			negat;

	negat = 1;
	res = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negat = negat * (-1);
		i++;
	}
	while (str[i] && (ft_isdigit(str[i]) == 1))
	{
		if (res > LONG_MAX / 10)
			return (-1);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (negat * res);
}
/*
static int	ft_isspace(const char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if ((res > LONG_MAX / 10) || (res == LONG_MAX / 10 && *str > '7'))
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		res = res * 10 + (*str++ - '0');
	}
	return ((int)(sign * res));
}*/