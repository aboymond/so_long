# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: piow00 <piow00@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 17:21:48 by aboymond          #+#    #+#              #
#    Updated: 2022/05/06 20:52:06 by piow00           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isdigit.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_strnstr.c\
	  ft_atoi.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c\
	  ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c ft_calloc.c    \
	  ft_isalnum.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_putchar_fd.c   \
	  ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c        \
	  ft_striteri.c ft_putstr_fd.c ft_substr.c ft_isascii.c ft_memcmp.c        \
	  ft_strlcpy.c ft_strdupcat.c ft_strichr.c ft_strdel.c get_next_line.c	   \
	  ft_printf.c ft_putstrf.c ft_putcharf.c ft_printnbr.c ft_uprint.c 		   \
	  ft_putnbrhexa.c ft_putnbrhexa_p.c
BONUS = ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstadd_back.c ft_lstnew.c     \
	    ft_lstadd_front.c ft_lstsize.c ft_lstclear.c ft_lstdelone.c 		   \
		ft_lstclear.c
GCC = gcc -g
#CFLAGS    = -Wall -Werror -Wextra 
OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		 @ar r $(NAME) $(OBJS)


bonus: 
		$(GCC) $(SRC) $(BONUS) $(CFLAGS)

clean: 
	rm -f ${OBJS}
	rm -f ${OBJS_BONUS}

fclean: clean
	rm -f ${NAME}

re: 
	fclean all

.PHONY: all libft.a clean fclean re  