/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:35:02 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/12 16:02:59 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char const *str, char const *set)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (set[i])
	{
		if (set[i] == str[j])
		{
			return (1);
		}
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_set((char *)&s1[start], set) == 1 && s1[start])
	{
		start++;
	}
	while (ft_set((char *)&s1[end], set) == 1 && end > 0)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}
