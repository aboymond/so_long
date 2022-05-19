/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:43:14 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/11 22:42:04 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int			i;
	long int	nb;

	nb = n;
	i = 0;
	if (nb == 0)
		i++;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_calcul(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_intlen(nb);
	str = (char *)ft_calloc(ft_intlen(nb) + 1, sizeof(char));
	if (!str)
		return (0);
	if (!nb)
	{
		str[0] = '0';
		return (str);
	}
	while (i > 0)
	{
		if (nb < 0)
			nb *= -1;
		str[i - 1] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;

	nb = n;
	str = ft_calcul(nb);
	if (!str)
		return (0);
	if (nb < 0)
		str[0] = '-';
	str[ft_strlen(str)] = '\0';
	return (str);
}
