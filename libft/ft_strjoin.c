/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:33:54 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/09 13:29:47 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnew;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	strnew = malloc(sizeof(*strnew) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!strnew)
		return (0);
	while (s1[i])
	{
		strnew[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		strnew[i] = s2[j];
		j++;
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
