/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:21:23 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/09 11:15:24 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*aloc;

	aloc = malloc(count * size);
	if (!aloc)
		return (0);
	ft_bzero(aloc, count * size);
	*aloc = '\0';
	return (aloc);
}
