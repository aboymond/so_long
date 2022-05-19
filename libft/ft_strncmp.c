/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:51:54 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/05 19:16:31 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *f, const char *s, size_t l)
{
	unsigned int	i;

	i = 0;
	if (!l)
		return (0);
	while ((i < l - 1) && (f[i] && s[i]) && (f[i] == s[i]))
		i++;
	return ((unsigned char)f[i] - (unsigned char)s[i]);
}
