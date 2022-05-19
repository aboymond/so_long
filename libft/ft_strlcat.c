/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:56:58 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/12 16:09:38 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	if (destlen >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[i] && i + destlen < dstsize - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (ft_strlen(&src[i]) + ft_strlen(dest));
}
