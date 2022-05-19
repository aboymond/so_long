/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_objets.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piow00 <piow00@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:34:02 by piow00            #+#    #+#             */
/*   Updated: 2022/05/08 23:15:52 by piow00           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	collectibles(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'C')
	{
		init_img(map, COLL, x * 64, y * 64);
	}
}

void	sortie(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'E')
	{
		if (map->car_c == 0)
		{
			init_img(map, DOOR_OP, map->e_x * 64, map->e_y * 64);
		}
		else
			init_img(map, DOOR, x * 64, y * 64);
	}
}

void	ronflex(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'R')
	{
		init_img(map, RONF, x * 64, y * 64);
	}
}
