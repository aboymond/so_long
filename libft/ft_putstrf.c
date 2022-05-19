/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:02:07 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/12 11:33:04 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstrf(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstrf("(null)"));
	while (str[i])
	{
		ft_putcharf(str[i]);
		i++;
	}
	return (i);
}
