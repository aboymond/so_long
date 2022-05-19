/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:04:39 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/08 16:29:18 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *n, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (!*n)
		return ((char *)hs);
	while (hs[i] && i < len)
	{	
		y = 0;
		while (hs[i + y] == n[y] && i + y < len)
		{
			if (n[y + 1] == '\0')
				return ((char *)hs + i);
			y++;
		}
		i++;
	}
	return (0);
}
