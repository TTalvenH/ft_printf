/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttalvenh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:04:10 by ttalvenh          #+#    #+#             */
/*   Updated: 2022/11/28 12:04:12 by ttalvenh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putnbr_base(unsigned long long n, int fd, int base)
{
	const char	*base_n = "0123456789abcdef";

	if (n > 9)
	{
		ft_put
	}
	else (n <= 9 && n >= 0)
}


void	foo(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(ap, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(ap, char *), 1));
	else if (c == 'p')
		return (ft_putnbr_base(va_arg(ap, unsigned long long), 1, 16));
	// else if (c == 'd')
	// 	return (foo(va_arg(ap, int)));
	// else if (c == 'i')
	// 	return (foo(va_arg(ap, int)));
	// else if (c == 'u')
	// 	return (foo(va_arg(ap, int)));
	// else if (c == 'x')
	// 	return (foo(va_arg(ap, int)));
	// else if (c == 'X')
	// 	return (foo(va_arg(ap, int)));
	else if (c == '%')
		return (ft_putchar_fd('%', 1));
	// else
	// {

	// }
	return ;
}

int ft_printf(const char *str, ...)
{
	va_list ap;

	if (!str)
		return (1);
	va_start (ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			foo(*str, ap);
		}
		else
		{
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(ap);
	return (0);
}
