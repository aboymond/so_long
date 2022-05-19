/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:25:17 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/12 16:09:40 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *rdest, const char *rsrc, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(rsrc));
	while (rsrc[i] && i < dstsize - 1)
	{
		rdest[i] = rsrc[i];
		i++;
	}
	rdest[i] = '\0';
	return (ft_strlen(rsrc));
}
