/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:28:02 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/12 11:32:58 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(unsigned int n)
{
	unsigned int			i;
	unsigned long int		nb;

	nb = n;
	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

int	ft_putnbrhexa(unsigned int n, int t)
{
	char	*hexa;

	if (t == 0)
		hexa = "0123456789abcdef";
	if (t == 1)
		hexa = "0123456789ABCDEF";
	if (n >= 0 && n <= 15)
		ft_putcharf(hexa[n]);
	else
	{
		ft_putnbrhexa(n / 16, t);
		ft_putnbrhexa(n % 16, t);
	}
	return (ft_intlen(n));
}
