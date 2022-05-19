/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   item.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:09:29 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/13 14:16:34 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long.h"

int	check_exit(t_map *map, int x, int y)
{
	int	ronf;

	ronf = map->car_c;
	if (map->maps[y][x] == 'E' && ronf != 0)
		return (0);
	else if (map->maps[y][x] == 'E' && ronf == 0)
	{
		free(map->maps);
		exit (0);
	}
	else if (ronf == 0)
		init_img(map, DOOR_OP, map->e_x * 64, map->e_y * 64);
	return (1);
}

void	check_coll(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'C')
	{
		map->maps[y][x] = '0';
		map->car_c--;
	}
}
