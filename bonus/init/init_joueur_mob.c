/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_joueur_mob.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:08:16 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/12 14:50:27 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_joueur(t_map *map, int x, int y, char *c)
{
	if (map->maps[y][x] == 'P')
	{
		init_bulle(map, x, y);
		init_img(map, c, x * 64, y * 64);
		map->maps[y][x] = '0';
	}
}

void	init_roro(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'T')
	{
		map->valid_roro = 1;
		init_img(map, TDOWN1, x * 64, y * 64);
		map->maps[y][x] = '0';
	}
}

void	init_bulle(t_map *map, int x, int y)
{
	char	*c;
	char	*coll;
	char	*coin;

	c = ft_itoa(map->pas);
	coin = ft_itoa(map->car_c);
	coll = ft_strjoin("C = ", coin);
	free(coin);
	init_img(map, BULLE, map->p_x * 64, (map->p_y * 64) - 64);
	mlx_string_put(map->mlx->mlx, map->mlx->win, (map->p_x * 64) + 25,
		(map->p_y * 64) - 40, 0, c);
	mlx_string_put(map->mlx->mlx, map->mlx->win, (map->p_x * 64) + 15,
		(map->p_y * 64) - 25, 0, coll);
	init_sol(map, x, y);
	init_mur(map, x, y);
	free(coll);
	free(c);
}
