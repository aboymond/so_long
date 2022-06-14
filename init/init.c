/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:25:50 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/13 14:06:44 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_struct(t_map	*initstruct)
{
	initstruct->y = 0;
	initstruct->x = 0;
	initstruct->e_y = 0;
	initstruct->e_x = 0;
	initstruct->nbp = 0;
	initstruct->larg = 0;
	initstruct->lon = 0;
	initstruct->comp_x = -1;
	initstruct->comp_y = -1;
	initstruct->walk = 0;
	initstruct->car_c = 0;
	initstruct->car_e = 0;
	initstruct->pas = 0;
	initstruct->m_i = 1;
	initstruct->i = 0;
}

void	init_all(t_map *map)
{
	while (map->maps[map->larg])
	{
		while (map->lon != map->x - 1)
		{
			erreur_map(map, map->lon, map->larg);
			error_carac(map->maps[map->larg][map->lon]);
			init_sol(map, map->lon, map->larg);
			init_mur(map, map->lon, map->larg);
			sortie(map, map->lon, map->larg);
			collectibles(map, map->lon, map->larg);
			init_joueur(map, map->lon, map->larg, RIGHT1);
			map->lon++;
		}
		map->lon = 0;
		map->larg++;
	}
}

void	init_compt(t_map *map)
{
	compteur_objs(map);
	compteur_joueur(map);
}

void	init_img(t_map *map, char *c, int x, int y)
{
	char	*img;

	img = mlx_xpm_file_to_image(map->mlx->mlx, c, &map->w, &map->h);
	map->img = img;
	mlx_put_image_to_window(map->mlx->mlx, map->mlx->win, map->img,
		x, y);
}

void	ft_init_map(t_map *map)
{
	map->mlx->win = mlx_new_window(map->mlx->mlx,
			(map->x - 1) * 64, map->y * 64, "solong");
}
