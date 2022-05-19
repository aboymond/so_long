/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:00:59 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/12 11:32:27 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printnbr(int nb)
{
	int		len;
	char	*num;

	num = ft_itoa(nb);
	len = ft_putstrf(num);
	free (num);
	return (len);
}
