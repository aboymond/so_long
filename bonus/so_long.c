/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:09:19 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/10 17:44:17 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_win(t_map *map);

int	main(int argc, char *argv[])
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	map->mlx = malloc(sizeof(t_map));
	map->mlx->mlx = mlx_init();
	ft_erreur(argc, argv);
	init_struct(map);
	compt_map(argv[1], map);
	ft_read_maps(argv[1], map);
	init_compt(map);
	ft_init_map(map);
	error_carac2(map);
	init_all(map);
	if (map->valid_roro == 1)
		mlx_loop_hook(map->mlx->mlx, move_roro, map);
	mlx_hook(map->mlx->win, 17, 1L << 0, exit_win, map);
	mlx_key_hook(map->mlx->win, key_hook, map);
	mlx_loop(map->mlx->mlx);
	return (0);
}

int	move_roro(t_map *map)
{
	if (map->i != 5000)
	{
		map->i++;
		return (0);
	}
	else
	{
		move_mob(map);
		map->i = 0;
	}
	return (0);
}

int	exit_win(t_map *map)
{
	free (map);
	exit (EXIT_SUCCESS);
}
