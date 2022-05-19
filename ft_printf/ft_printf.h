/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:08:59 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/29 18:11:23 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putcharf(int c);
int		ft_putstrf(char *str);
int		ft_printnbr(int nb);
int		ft_uprint(unsigned int nb);
int		ft_putnbrhexa(unsigned int nb, int t);
int		ft_putnbrhexa_p(unsigned long long int n);

#endif
