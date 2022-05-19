/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:49:27 by aboymond          #+#    #+#             */
/*   Updated: 2022/04/12 11:32:15 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_spec(char spec, int count, va_list ap)
{
	if (spec == 'c')
		count += ft_putcharf(va_arg(ap, int));
	else if (spec == 's')
		count += ft_putstrf(va_arg(ap, char *));
	else if (spec == '%')
		count += ft_putcharf('%');
	else if (spec == 'i' || spec == 'd')
		count += ft_printnbr(va_arg(ap, int));
	else if (spec == 'u')
		count += ft_uprint(va_arg(ap, int));
	else if (spec == 'x')
		count += ft_putnbrhexa(va_arg(ap, unsigned int), 0);
	else if (spec == 'X')
		count += ft_putnbrhexa(va_arg(ap, unsigned int), 1);
	else if (spec == 'p')
	{
		count += ft_putstrf("0x");
		count += ft_putnbrhexa(va_arg(ap, unsigned int), 0);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count = ft_spec(format[i], count, ap);
		}
		else
			count += ft_putcharf(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
