/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:46:41 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/05 19:16:47 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	if (dest > src)
	{
		while (i < len)
		{
			(((unsigned char *)dest)[(len - i) - 1])
				= (((unsigned char *)src)[(len - i) - 1]);
			i++;
		}
	}
	return (dest);
}
