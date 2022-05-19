/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:23:41 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/09 11:08:55 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *) s) - 1;
	if (!s)
		return (NULL);
	if (!c || c == '\0')
		return ((char *)s + (i + 1));
	while (i >= 0)
	{
		if ((char) s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
