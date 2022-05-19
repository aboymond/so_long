/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:22:41 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/10 15:11:34 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_rectangle(t_map *map, char *tmp)
{
	if ((int)ft_strlen(tmp) + (ft_strichr(tmp, '\n') == -1) != map->x)
	{
		erreur_print(map, 3);
		exit (0);
	}
}
