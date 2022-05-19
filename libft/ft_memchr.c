/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:39:41 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/05 19:16:54 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memo, int seachar, size_t size)
{
	size_t	i;
	char	*p;

	p = (char *) memo;
	i = 0;
	while (i < size)
	{
		if (p[i] == (char) seachar)
			return (&p[i]);
		i++;
	}
	return (0);
}
