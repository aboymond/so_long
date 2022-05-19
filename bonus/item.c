/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   item.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:09:29 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/12 14:49:17 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long.h"

int	check_ronf(t_map *map, int x, int y)
{
	int	ronf;

	if (map->ronf_x < 0 && map->ronf_y < 0)
		return (1);
	ronf = map->car_c;
	if (map->maps[y][x] == 'R' && ronf != 0)
		return (0);
	else if (map->maps[y][x] == 'E' && ronf != 0)
		return (0);
	else if (map->maps[y][x] == 'E' && ronf == 0)
	{
		free(map);
		exit (EXIT_SUCCESS);
	}
	else if (ronf == 0)
		init_img(map, DOOR_OP, map->e_x * 64, map->e_y * 64);
	else if (ronf == 1 && map->ronf_x != 0 && map->ronf_y != 0)
	{
		map->maps[map->ronf_y][map->ronf_x] = 'W';
		init_sol(map, map->ronf_x, map->ronf_y);
	}
	return (1);
}

void	init_compteur(t_map *map, int x, int y)
{
	char	*c;
	char	*coin;
	char	*coll;

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
	collectibles(map, x, y);
	sortie(map, x, y);
	free(coll);
	free(c);
}

void	check_coll(t_map *map, int x, int y)
{
	if (map->maps[y][x] == 'C')
	{
		map->maps[y][x] = '0';
		map->car_c--;
	}
}
