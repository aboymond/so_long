/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_item.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:11:08 by piow00            #+#    #+#             */
/*   Updated: 2022/05/10 18:49:04 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_player(t_map *map, int x, int y, char *c)
{
	if (map->maps[y][x] == 'P')
	{
		map->p_x = x;
		map->p_y = y;
		init_img(map, c, x * 64, y * 64);
		map->nbp++;
		map->maps[y][x] = '0';
	}
}

void	init_wall(t_map *map, int x, int y)
{
	if (map->maps[y][x] == '1')
		init_img(map, WALL1, x * 64, y * 64);
	else if (map->maps[y][x] == 'M')
		init_img(map, WWALL1, x * 64, y * 64);
	else if (map->maps[y][x] == 'L')
		init_img(map, WALL2, x * 64, y * 64);
}

void	init_ground(t_map *map, int x, int y)
{
	if (map->maps[y][x] == '0')
		init_img(map, GROUND1, x * 64, y * 64);
	else if (map->maps[y][x] == 'F')
		init_img(map, HGROUND1, x * 64, y * 64);
	else if (map->maps[y][x] == 'G')
		init_img(map, WAY1, x * 64, y * 64);
	else if (map->maps[y][x] == 'I')
		init_img(map, WGROUND1, x * 64, y * 64);
	else if (map->maps[y][x] == 'J')
		init_img(map, WGROUNDUP, x * 64, y * 64);
	else if (map->maps[y][x] == 'K')
		init_img(map, WATER, x * 64, y * 64);
	else if (map->maps[y][x] == 'E')
	{
		if (map->maps[y][x] == 'E' && map->car_c == 0)
			init_img(map, DOOR_OP, x * 64, y * 64);
		else
			init_img(map, DOOR, x * 64, y * 64);
	}
	else if (map->maps[y][x] == 'N')
		init_img(map, TDOWN1, x * 64, y * 64);
	else if (map->maps[y][x] == 'C')
		init_img(map, COLL, x * 64, y * 64);
}

void	init_other(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'C')
	{
		init_img(map, COLL, x * 64, y * 64);
		map->car_c++;
	}
	else if (map->maps[y][x] == 'H')
	{
		map->ronf_x = x;
		map->ronf_y = y;
		init_img(map, RONF, x * 64, y * 64);
	}
	else if (map->maps[map->larg][map->lon] == 'E')
	{
		map->e_x = map->lon;
		map->e_y = map->larg;
		init_img(map, DOOR, x * 64, y * 64);
		map->car_e++;
	}
	else if (map->maps[y][x] == 'N')
	{
		map->mob_x = x;
		map->mob_y = y;
		init_img(map, TDOWN1, x * 64, y * 64);
		map->maps[y][x] = '0';
	}
}
