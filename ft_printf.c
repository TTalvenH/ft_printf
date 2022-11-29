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

int	ft_putnbr_ull_base(unsigned long long n, int fd, int base, int flag)
{
	const char	*base_n = "0123456789abcdef0123456789ABCDEF";
	int			count;

	count = 0;
	if (!flag)
	{
		count += ft_putstr_fd("0x", 1);
		flag++;
	}
	if (base < 2 || base > 16)
		return (-1);
	if (n / base)
	{
		count += ft_putnbr_ull_base(n / base, fd, base, flag);
		count += ft_putnbr_ull_base(n % base, fd, base, flag);
	}
	if (n < (unsigned long long)base)
	{
		if (flag == 1)
			count += ft_putchar_fd (base_n[n], fd);
		if (flag == 2)
			count += ft_putchar_fd (base_n[n + 16], fd);
	}
	return (count);
}

int	check(char c, va_list ap)
{
	int	chr_n;

	chr_n = 0;
	if (c == 'c')
		chr_n = ft_putchar_fd(va_arg(ap, int), 1);
	if (c == 's')
		chr_n = ft_putstr_fd(va_arg(ap, char *), 1);
	if (c == 'p')
		chr_n = ft_putnbr_ull_base(va_arg(ap, unsigned long long), 1, 16, 0);
	if (c == 'd' || c == 'i')
		chr_n = ft_putnbr_fd(va_arg(ap, int), 1);
	if (c == 'u')
		chr_n = ft_putnbr_ull_base(va_arg(ap, unsigned), 1, 10, 1);
	if (c == 'x')
		chr_n = ft_putnbr_ull_base(va_arg(ap, unsigned), 1, 16, 1);
	if (c == 'X')
		chr_n = ft_putnbr_ull_base(va_arg(ap, unsigned), 1, 16, 2);
	if (c == '%')
		chr_n = ft_putchar_fd('%', 1);
	return (chr_n);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		chr_n;

	chr_n = 0;
	if (!str)
		return (1);
	va_start (ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			chr_n += check(*str, ap);
		}
		else
		{
			ft_putchar_fd(*str, 1);
			chr_n++;
		}
		str++;
	}
	va_end(ap);
	return (chr_n);
}
