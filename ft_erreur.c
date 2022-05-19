/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erreur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:10:56 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/13 14:22:46 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_erreur(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_printf("\n \033[1;31m Error:\n\tErreur d'arguments \033[00m \n", 1);
		exit (0);
	}
	if (ft_check_arg(argv[1]) != 1)
	{
		ft_printf("\n\033[1;31m Error:\n\t'.ber' Non valide\033[00m \n", 1);
		exit (0);
	}
	return (0);
}

void	erreur_map(t_map *map, int x, int y)
{
	if (map->nbp > 1 || map->nbp < 1)
	{
		erreur_print(map, 1);
		exit (0);
	}
	if (x < map->x - 1 && (map->maps[0][x] != '1'
		|| map->maps[map->y - 1][x] != '1'))
	{
		erreur_print(map, 2);
		exit (0);
	}
	if (map->maps[y][0] != '1' ||
			map->maps[y][map->x - 2] != '1')
	{
		erreur_print(map, 2);
		exit (0);
	}
}

void	error_carac(char c)
{
	if (c == '0' || c == '1' || c == 'P' || c == 'E' || c == 'C')
		return ;
	else
	{
		ft_printf("\033[1;31m Error:\n\tCaractere non valide = '%c'\033[00m\n", c);
		exit (0);
	}
}

void	error_carac2(t_map *map)
{
	if (map->car_c <= 0)
	{
		ft_printf("\033[1;31m Error:\n\tPas de collectible\033[00m\n");
		exit (0);
	}
	if (map->car_e <= 0 || map->car_e >= 2)
	{
		ft_printf("\033[1;31m Error:\n\tProbleme sortie\033[00m\n");
		exit (0);
	}
}

void	erreur_print(t_map *map, int error)
{
	ft_printf("\033[1;31mError :\033[00m\n");
	if (error == 1)
		ft_printf("\t\033[1;31m Pas le bon nombre de joueurs\033[00m\n");
	if (error == 2)
		ft_printf("\t\033[1;31m Murs non conforme\033[00m\n");
	if (error == 3)
		ft_printf("\t\033[1;31m La map n'est pas rectangle \033[00m\n");
	if (error == 4)
		ft_printf("\t\033[1;31m !!! GAME OVER !!! \033[00m\n");
	free (map);
	exit (EXIT_SUCCESS);
}
