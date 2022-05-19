/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:44:37 by piow00            #+#    #+#             */
/*   Updated: 2022/05/10 18:06:03 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# if defined(__APPLE__) && defined(__MACH__)
#  include "./mlx/mlx.h"
#  define LEFT_KEY				123	
#  define RIGHT_KEY				124	
#  define UP_KEY				126
#  define DOWN_KEY				125	
#  define A_KEY					0
#  define S_KEY					1
#  define D_KEY					2
#  define W_KEY					13
#  define ESC 					53

# else
#  include "./mlx-linux/mlx.h"
#  define LEFT_KEY				65361
#  define RIGHT_KEY				65363
#  define UP_KEY				65362
#  define DOWN_KEY				65364
#  define A_KEY					97
#  define W_KEY					119
#  define S_KEY					115
#  define D_KEY					100
#  define ESC					65307
# endif

# include "./libft/libft.h"
# include "./sprites/sprites.h"

typedef struct s_mlx
{
	void	*mlx;
	void	*win;

}		t_mlx;

typedef struct s_map
{
	void	*img;
	char	**maps;
	int		lon;
	int		larg;
	int		nbp;
	int		pas;
	int		p_x;
	int		p_y;
	int		car_c;
	int		car_e;
	int		e_x;
	int		e_y;
	int		ronf_x;
	int		ronf_y;
	int		comp_x;
	int		comp_y;
	int		mob_x;
	int		mob_y;
	int		x;
	int		test_x;
	int		y;
	int		w;
	int		h;
	int		walk;
	int		i;
	int		m_i;
	int		valid_roro;
	t_mlx	*mlx;
}		t_map;

// ERREURS //

void	error_carac2(t_map *map);
void	is_rectangle(t_map *map, char *tmp);
int		ft_check_arg(char *c);
int		ft_erreur(int argc, char **argv);
void	erreur_map(t_map *map, int x, int y);
void	error_carac(char c);
void	erreur_print(t_map *map, int error);

// CHECK MAP + COMPT MAP //

void	ft_read_maps(char *maps, t_map *map);
void	callocmap(t_map *map);
void	compt_map(char *maps, t_map *map);
int		check_exit(t_map *map, int x, int y);
void	check_coll(t_map *map, int x, int y);
void	check_carac(t_map *map);
int		check_sortie(t_map *map, int x, int y, int sortie);

// COMPTEUR //

void	init_compt(t_map *map);
void	compteur_objs(t_map *map);
void	compteur_joueur(t_map *map);

// INIT //

void	init_img(t_map *map, char *c, int x, int y);
void	init_struct(t_map	*initstruct);
void	ft_read_maps(char *maps, t_map *map);
void	callocmap(t_map *map);
void	ft_init_map(t_map *map);
void	init_all(t_map *map);
void	init_compteur(t_map *map, int x, int y);

// INIT JOUEUR //

void	init_joueur(t_map *map, int x, int y, char *c);

// INIT OBJS //

void	collectibles(t_map *map, int x, int y);
void	sortie(t_map *map, int x, int y);

// INIT MUR SOL //

void	init_mur(t_map *map, int x, int y);
void	init_sol(t_map *map, int x, int y);
void	mur_texture_x(t_map *map, int x, int y);
void	mur_texture_y(t_map *map, int x, int y);

// MOVE PLAYER //

int		key_hook(int keycode, t_map *map);
void	player_move(t_map *map, int x, int y);
int		right(t_map *map, int x, int y);
int		left(t_map *map, int x, int y);
int		up(t_map *map, int x, int y);
int		down(t_map *map, int x, int y);
void	move_d(t_map *map, int x, int y);
void	move_l(t_map *map, int x, int y);
void	move_u(t_map *map, int x, int y);
void	move_do(t_map *map, int x, int y);

#endif
