# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 13:42:52 by aboymond          #+#    #+#              #
#    Updated: 2022/04/12 11:27:47 by aboymond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libftprintf.a
SRC    = ft_printf.c ft_putstrf.c ft_putcharf.c ft_printnbr.c ft_uprint.c ft_putnbrhexa.c ft_putnbrhexa_p.c
CC     = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS   = $(SRC:.c=.o)

all: $(NAME)

${NAME}: ${OBJS
		ar rcs $(NAME) $(OBJS)

clean: 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all 
