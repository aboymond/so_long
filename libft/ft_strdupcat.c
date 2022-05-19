/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:52:02 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/05 13:54:30 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupcat(char **s1, char *s2)
{
	char	*strnew;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!(*s1) && !s2)
		return (NULL);
	strnew = malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(s2)) + 1);
	if (!strnew)
		return (NULL);
	while (*s1 && (*s1)[i])
		strnew[j++] = (*s1)[i++];
	i = 0;
	while (s2 && s2[i])
		strnew[j++] = s2[i++];
	strnew[j] = '\0';
	ft_strdel(s1);
	(*s1) = strnew;
	return (strnew);
}
