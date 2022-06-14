/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_joueur_mob.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:08:16 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/10 18:29:13 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_joueur(t_map *map, int x, int y, char *c)
{
	if (map->maps[y][x] == 'P')
	{
		init_sol(map, x, y);
		init_img(map, c, x * 64, y * 64);
		map->maps[y][x] = '0';
	}
}
