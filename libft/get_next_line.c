/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:12:47 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/12 11:08:11 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	gnl_read(char **buff_s, char **line, int fd, int bli)
{
	char		buff[BUFFER_SIZE + 1];
	int			ret;

	ft_strdupcat(line, *buff_s);
	while (ft_strichr(*line, '\n') == -1)
	{
		ret = read(fd, buff, BUFFER_SIZE);
		if (ret <= 0)
		{
			ft_strdel(buff_s);
			return (*line && (*line[0] != '\0'));
		}
		buff[ret] = '\0';
		ft_strdupcat(line, buff);
	}
	bli = ft_strichr(*line, '\n');
	if (bli >= 0)
	{
		ft_strdel(buff_s);
		ft_strdupcat(buff_s, &(*line)[bli + 1]);
		(*line)[bli + 1] = '\0';
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*data[FOPEN_MAX];
	char		*line;

	line = NULL;
	if (fd < FOPEN_MAX && fd >= 0 && !gnl_read(&(data[fd]), &line, fd, 0))
		ft_strdel(&line);
	return (line);
}
/*
int	main(void)
{
	int			fd = open("test", O_RDONLY);
	int			i = 1;
	// char		*retour = get_next_line(fd);
	char		*retour;
	retour = get_next_line(fd);
	while (retour != NULL)
	{
		printf("%s", retour);
		i++;
		retour = get_next_line(fd);
	}
	printf("[%i] = %s\n", i, retour);
	//while (1) ; 
}*/
/*
int	main(void)
{
	int			fd;
	int			i;
	char		*line_main;

	i = 0;
	fd = open("test", O_RDONLY);
	printf("fd = %d\n", fd);
	while (i < 100)
	{
		line_main = get_next_line(fd);
		printf("%s", line_main);
		i++;
	}
	return (0);
}*/