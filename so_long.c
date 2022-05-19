/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:09:19 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/13 14:15:42 by aboymond         ###   ########.fr       */
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
	mlx_hook(map->mlx->win, 17, 1L << 0, exit_win, map);
	mlx_key_hook(map->mlx->win, key_hook, map);
	mlx_loop(map->mlx->mlx);
	return (0);
}

int	exit_win(t_map *map)
{
	free (map);
	exit (EXIT_SUCCESS);
}
