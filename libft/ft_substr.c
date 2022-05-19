/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:03:42 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/12 16:11:15 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aloc;
	size_t	i;
	size_t	index;

	i = 0;
	if (!s)
		return (0);
	if (len > (size_t)ft_strlen(s))
		index = (size_t)ft_strlen(s);
	else
		index = len;
	aloc = (char *)ft_calloc(index + 1, sizeof(*aloc));
	if (!aloc)
		return (0);
	while (start < (unsigned int)ft_strlen(s) && i < index)
	{
		aloc[i] = s[start + i];
		i++;
	}
	aloc[i] = '\0';
	return (aloc);
}
