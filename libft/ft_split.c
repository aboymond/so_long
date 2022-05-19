/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:20:09 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/16 11:34:16 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		tmp;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	tab = ft_calloc(sizeof(char *), ft_set(s, c) + 1);
	while (tab && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tmp = i;
		while (s[i] && s[i] != c)
			i++;
		if (tmp != i)
			tab[j++] = ft_substr(s, tmp, i - tmp);
	}
	return (tab);
}
