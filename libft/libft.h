/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:40:18 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/19 11:17:59 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *rdest, const char *rsrc, size_t dstsize);
size_t		ft_strlcat(char *dest, const char *src, size_t count);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *hs, const char *n, size_t len);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char		*ft_itoa(int n);
char		**ft_split(char const *s, char c);
char		*ft_strdupcat(char **s1, char *s2);
char		*get_next_line(int fd);

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_strncmp(const char *f, const char *s, size_t l);
int			ft_strichr(const char *s, int c);
int			ft_printf(const char *format, ...);
int			ft_putcharf(int c);
int			ft_putstrf(char *str);
int			ft_printnbr(int nb);
int			ft_uprint(unsigned int nb);
int			ft_putnbrhexa(unsigned int nb, int t);
int			ft_putnbrhexa_p(unsigned long long int n);

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t len);
void		*ft_memchr(const void *memo, int seachar, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		*ft_calloc(size_t count, size_t size);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_striteri(char *s, void (*f) (unsigned int, char*));
void		ft_strdel(char **str);

						/*BONUS*/

int			ft_lstsize(t_list *lst);
t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));

#endif
