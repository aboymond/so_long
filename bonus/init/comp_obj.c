/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp_obj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piow00 <piow00@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:45:18 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/07 22:31:51 by piow00           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	compteur_objs(t_map *map)
{
	while (++map->comp_y != map->y)
	{
		while (++map->comp_x != map->x)
		{
			if (map->maps[map->comp_y][map->comp_x] == 'C')
				map->car_c++;
			if (map->maps[map->comp_y][map->comp_x] == 'E')
			{
				map->e_x = map->comp_x;
				map->e_y = map->comp_y;
				map->car_e++;
			}
		}
		map->comp_x = -1;
	}
	map->comp_x = -1;
	map->comp_y = -1;
}

void	compteur_joueur(t_map *map)
{
	while (map->maps[++map->comp_y])
	{
		while (++map->comp_x < map->x)
		{
			if (map->maps[map->comp_y][map->comp_x] == 'P')
			{
				map->p_x = map->comp_x;
				map->p_y = map->comp_y;
				map->nbp++;
			}
			else if (map->maps[map->comp_y][map->comp_x] == 'R')
			{
				map->ronf_x = map->comp_x;
				map->ronf_y = map->comp_y;
			}
			else if (map->maps[map->comp_y][map->comp_x] == 'T')
			{
				map->mob_x = map->comp_x;
				map->mob_y = map->comp_y;
			}
		}
		map->comp_x = -1;
	}
	map->comp_y = -1;
	map->comp_x = -1;
}
