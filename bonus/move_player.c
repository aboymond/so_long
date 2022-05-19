/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piow00 <piow00@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:53:23 by piow00            #+#    #+#             */
/*   Updated: 2022/05/08 19:02:22 by piow00           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_d(t_map *map, int x, int y)
{
	if (map->walk == 0)
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WRIGHT1, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, RIGHT1, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
		return ;
	}
	else
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WRIGHT2, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, RIGHT2, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
	}
}

void	move_l(t_map *map, int x, int y)
{
	if (map->walk == 0)
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WLEFT1, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, LEFT1, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
		return ;
	}
	else
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WLEFT2, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, LEFT2, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
	}
}

void	move_u(t_map *map, int x, int y)
{
	if (map->walk == 0)
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WUP1, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, UP1, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
		return ;
	}
	else
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WUP2, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, UP2, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
	}
}

void	move_do(t_map *map, int x, int y)
{
	if (map->walk == 0)
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WDOWN1, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, DOWN1, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
		return ;
	}
	else
	{
		if (map->maps[map->p_y][map->p_x] == 'O')
			init_img(map, WDOWN2, map->p_x * 64, map->p_y * 64);
		else
			init_img(map, DOWN2, map->p_x * 64, map->p_y * 64);
		init_sol(map, x, y);
	}
}
