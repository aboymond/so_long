# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 12:45:08 by piow00            #+#    #+#              #
#    Updated: 2022/05/12 13:53:59 by aboymond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- Sources -----------------
BONUS			=		bonus/so_long.c bonus/check_maps.c bonus/ft_erreur.c \
						bonus/init/init.c bonus/init_mob.c bonus/item.c\
						bonus/init/init_objets.c bonus/init/init_murs_sol.c\
						bonus/init/init_joueur_mob.c bonus/init/comp_obj.c \
						bonus/move.c bonus/move_player.c bonus/so_long_utils.c 
SOLONG			=		so_long.c check_maps.c ft_erreur.c init/init.c \
						init/init_objets.c init/init_murs_sol.c\
						init/init_joueur_mob.c init/comp_obj.c \
						move.c move_player.c so_long_utils.c item.c
LIB				=		./libft/libft.a
MLXLIB			=		./mlx/libmlx.a
LIBFT_MLX		=		$(MAKE) -C libft && $(MAKE) -C mlx
MINILBX			=		-Lmlx -lmlx -framework OpenGL -framework AppKit

# ---------------- OBJS & Sources -----------
SRC_SOLONG		=		$(SOLONG)
SRC_BONUS		=		$(BONUS)
OBJS_SOLONG		=		$(SRC_SOLONG:.c=.o)
OBJS_BONUS		=		$(SRC_BONUS:.c=.o)

# ---------------- Name && GCC --------------
NAME			=		so_long
GCC				=		gcc -g
CFLAGS			=		-Wall -Wextra -Werror #-fsanitize=address

# ---------------- Couleurs -----------------
GREEN			=		\033[1;32m
RED				=		\033[1;31m
ENDCOLOR		=		\033[0m

# --------------- Texts ---------------------
START			=		echo "\n $(GREEN)Compilation en cours$(ENDCOLOR)\n"
COMPOK			=		echo "\n $(GREEN)Compilation OK$(ENDCOLOR)\n"
LIBX			=		echo "\n $(GREEN)MinilibX OK$(ENDCOLOR)\n"
GNL_COMP		=		echo "\n $(GREEN)GNL OK$(ENDCOLOR)\n"
CLEAN_			=		echo "\n $(RED)Suppression des OBJS$(ENDCOLOR)\n"
FCLEAN_			=		echo "\n $(RED)Suppression des executables$(ENDCOLOR)\n"

ifeq ($(shell uname), Linux)
MLXLIB			=		./mlx-linux/libmlx.a
LIBFT_MLX		=		$(MAKE) -C libft && $(MAKE) -C mlx-linux
MINILBX			=	-L ./mlx-linux/ -lmlx -Ilmlx -lXext -lX11
endif

# --------------- Regles --------------------
all: $(NAME)

$(NAME): start so_long

start: 
		@$(START)
		@$(LIBFT_MLX)

so_long:
		 @$(GCC) $(SRC_SOLONG) $(LIB) $(MINILBX) $(CFLAGS) -o $(NAME)
		 @$(LIBX)
		 @$(COMPOK)
		 
bonus:   start
		 @$(GCC) $(BONUS) $(LIB) $(MINILBX) $(CFLAGS) -o $(NAME)
		 @$(LIBX)
		 @$(COMPOK)

clean:
		rm -rf $(OBJS_SOLONG)
		rm -rf $(OBJS_BONUS)
		cd libft && make clean
		cd mlx && make clean
		@$(CLEAN_)

fclean: clean
		rm -rf $(NAME)
		cd libft && make fclean
		cd mlx && make clean
		@$(FCLEAN_)
		
re: fclean all

.PHONY: all so_long clean fclean re libft 

			