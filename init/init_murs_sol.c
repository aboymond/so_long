/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_murs_sol.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:47:24 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/10 16:02:11 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_mur(t_map *map, int x, int y)
{
	if (map->maps[y][x] == '1')
	{
		init_img(map, WALL1, x * 64, y * 64);
	}
	else if (map->maps[y][x] == '2')
		init_img(map, WALL2, x * 64, y * 64);
}

void	init_sol(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'H')
		init_img(map, GROUND1, x * 64, y * 64);
	else if (map->maps[y][x] == 'W')
		init_img(map, GROUND1, x * 64, y * 64);
	else if (map->maps[y][x] == 'I')
		init_img(map, GROUND1, x * 64, y * 64);
	else if (map->maps[y][x] == 'J')
		init_img(map, GROUND1, x * 64, y * 64);
	else if (map->maps[y][x] == 'O')
		init_img(map, GROUND1, x * 64, y * 64);
	else
		init_img(map, GROUND1, x * 64, y * 64);
}

void	mur_texture_x(t_map *map, int x, int y)
{
	if (map->maps[y][x + 1] == 'O')
		init_img(map, WWALL1, x * 64, y * 64);
	else if (map->maps[y][x - 1] == 'O')
		init_img(map, WWALL1, x * 64, y * 64);
	else
		init_img(map, WALL1, x * 64, y * 64);
}

void	mur_texture_y(t_map *map, int x, int y)
{
	if (map->maps[y + 1][x] == 'O')
		init_img(map, WWALL1, x * 64, y * 64);
	else if (map->maps[y - 1][x] == 'O')
		init_img(map, WWALL1, x * 64, y * 64);
}
