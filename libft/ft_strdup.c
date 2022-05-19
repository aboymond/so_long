/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:08:21 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/19 11:09:58 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aloc;
	int		i;

	aloc = (char *)malloc(sizeof(*aloc) * (ft_strlen(s1) + 1));
	i = 0;
	if (!aloc)
		return (0);
	while (*s1)
	{
		aloc[i] = *s1;
		i++;
		s1++;
	}
	aloc[i] = '\0';
	return (aloc);
}
/*
char	*ft_strdup(const char *s1)
{
	char	*str;
	int		index;

	index = 0;
	str = malloc(sizeof(*str) * ft_strlen(s1) + 1);
	if (str == 0)
	{
		return (0);
	}
	while (s1[index] != '\0')
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
*/
/*
static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
		return (NULL);
	ft_strcpy(s2, (char *)s1);
	return (s2);
}*/