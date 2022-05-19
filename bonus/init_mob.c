/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:28:50 by piow00            #+#    #+#             */
/*   Updated: 2022/05/10 17:42:00 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_mob(t_map *map, int x, int y)
{
	if (map->mob_x == 0 && map->mob_y == 0)
		return (0);
	else if ((map->mob_y == y || map->mob_y + 1 == y || map->mob_y - 1 == y)
		&& map->mob_x == x)
	{
		erreur_print(map, 4);
	}
	return (0);
}

int	move_mob(t_map *map)
{
	if (map->mob_y == map->p_y && map->mob_x == map->p_x)
		erreur_print(map, 4);
	if (map->maps[map->mob_y][map->mob_x] == '1'
		|| map->maps[map->mob_y + 1][map->mob_x] == '2')
	{
		map->m_i = 0;
	}
	move_mob_down(map);
	if (map->maps[map->mob_y - 1][map->mob_x] == '1'
		|| map->maps[map->mob_y - 1][map->mob_x] == '2')
	{
		map->m_i = 1;
	}
	move_mob_up(map);
	return (0);
}

void	move_mob_down(t_map *map)
{
	if (map->m_i == 1)
	{
		if (map->maps[++map->mob_y][map->mob_x] != '1' && map->walk_mob == 0)
		{
			init_sol(map, map->mob_x, map->mob_y - 1);
			init_img(map, TDOWN1, map->mob_x * 64, map->mob_y * 64);
			map->walk_mob = 1;
		}
		else
		{
			init_sol(map, map->mob_x, map->mob_y - 1);
			init_img(map, TDOWN2, map->mob_x * 64, map->mob_y * 64);
			map->walk_mob = 0;
		}
	}
}

void	move_mob_up(t_map *map)
{
	if (map->m_i == 0)
	{
		if (map->maps[--map->mob_y][map->mob_x] != '1' && map->walk_mob == 0)
		{
			init_sol(map, map->mob_x, map->mob_y);
			init_img(map, TUP1, map->mob_x * 64, map->mob_y * 64);
			map->walk_mob = 1;
		}
		else
		{
			init_sol(map, map->mob_x, map->mob_y);
			init_img(map, TUP2, map->mob_x * 64, map->mob_y * 64);
			map->walk_mob = 0;
		}
		init_sol(map, map->mob_x, map->mob_y + 1);
		init_mur(map, map->mob_x, map->mob_y + 1);
	}
}
