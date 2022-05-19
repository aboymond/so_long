/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_maps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:02:27 by aboymond          #+#    #+#             */
/*   Updated: 2022/05/12 14:13:38 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	compt_map(char *maps, t_map *map)
{
	char	*tmp;
	int		fd;

	fd = open(maps, O_RDONLY);
	tmp = get_next_line(fd);
	map->x = ft_strlen(tmp);
	while (tmp)
	{
		is_rectangle(map, tmp);
		free(tmp);
		tmp = get_next_line(fd);
		map->y++;
	}
	callocmap(map);
	close(fd);
}

void	ft_read_maps(char *maps, t_map *map)
{
	int		fd;
	int		i;

	i = 0;
	fd = open(maps, O_RDONLY);
	if (fd < 0)
	{
		printf("erreur");
		exit (EXIT_SUCCESS);
	}
	map->maps[i] = get_next_line(fd);
	map->maps[i][map->x - 1] = '\n';
	while (++i < map->y)
	{
		map->maps[i] = get_next_line(fd);
		map->maps[i][map->x - 1] = '\n';
	}
	close(fd);
}

void	callocmap(t_map *map)
{
	map->maps = (char **)ft_calloc(map->x, sizeof(char *));
}

int	ft_check_arg(char *c)
{
	int	i;

	i = ft_strlen(c);
	if (c[--i] == 'r')
	{
		if (c[--i] == 'e')
		{
			if (c[--i] == 'b')
			{
				return (1);
			}
		}
	}
	return (0);
}
