/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:25:16 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/13 14:14:30 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long.h"

int	key_hook(int keycode, t_map *map)
{
	if (keycode == D_KEY || keycode == RIGHT_KEY)
		right(map, map->p_x, map->p_y);
	else if (keycode == A_KEY || keycode == LEFT_KEY)
		left(map, map->p_x, map->p_y);
	else if (keycode == W_KEY || keycode == UP_KEY)
		up(map, map->p_x, map->p_y);
	else if (keycode == S_KEY || keycode == DOWN_KEY)
		down(map, map->p_x, map->p_y);
	else if (keycode == ESC)
	{
		free(map);
		exit (0);
	}
	ft_printf("Pas = %d\n", map->pas);
	return (0);
}

int	right(t_map *map, int x, int y)
{
	check_coll(map, x + 1, y);
	if (check_exit(map, x + 1, y) == 0)
		return (0);
	if ((map->maps[y][x + 1]) == '1' || (map->maps[y][x + 1])
			== '2')
		return (0);
	map->p_x++;
	map->pas++;
	if (map->walk == 0)
	{
		move_d(map, x, y);
		map->walk = 1;
		return (0);
	}
	else
	{
		move_d(map, x, y);
		map->walk = 0;
		return (0);
	}
}

int	left(t_map *map, int x, int y)
{
	check_coll(map, x - 1, y);
	if (check_exit(map, x - 1, y) == 0)
		return (0);
	if ((map->maps[y][x - 1]) == '1' || (map->maps[y][x - 1])
			== '2')
		return (0);
	map->p_x--;
	map->pas++;
	if (map->walk == 0)
	{
		move_l(map, x, y);
		map->walk = 1;
		return (0);
	}
	else
	{
		move_l(map, x, y);
		map->walk = 0;
		return (0);
	}
}

int	up(t_map *map, int x, int y)
{
	check_coll(map, x, y - 1);
	if (check_exit(map, x, y - 1) == 0)
		return (0);
	if ((map->maps[y - 1][x]) == '1' || (map->maps[y - 1][x])
			== '2')
		return (0);
	map->p_y--;
	map->pas++;
	if (map->walk == 0)
	{
		move_u(map, x, y);
		map->walk = 1;
		return (0);
	}
	else
	{
		move_u(map, x, y);
		map->walk = 0;
		return (0);
	}
}

int	down(t_map *map, int x, int y)
{
	check_coll(map, x, y + 1);
	if (check_exit(map, x, y + 1) == 0)
		return (0);
	if ((map->maps[y + 1][x]) == '1' || (map->maps[y + 1][x])
			== '2')
		return (0);
	map->p_y++;
	map->pas++;
	if (map->walk == 0)
	{
		move_do(map, x, y);
		map->walk = 1;
		return (0);
	}
	else
	{
		move_do(map, x, y);
		map->walk = 0;
		return (0);
	}
}
