/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:22:12 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/05 19:16:52 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
	{
		i++;
	}
	if (i == n)
	{
		i--;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
