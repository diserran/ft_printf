/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:03:22 by diserran          #+#    #+#             */
/*   Updated: 2022/08/11 21:46:51 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_flags(va_list args, char const flag)
{
	int	len;

	len = 0;
	if (flag == 'c')
		len += ft_putchar(va_arg(args, int));
	if (flag == 's')
		len += ft_putstr(va_arg(args, char *));
	if (flag == 'p')
	{
		len += ft_putstr("0x");
		len += ft_puthexa(va_arg(args, unsigned long int), 'p');
	}
	if (flag == 'd' || flag == 'i')
		len += ft_putnbr(va_arg(args, int));
	if (flag == 'u')
		len += ft_putunsnbr(va_arg(args, unsigned int));
	if (flag == 'X')
		len += ft_puthexa(va_arg(args, unsigned int), 'X');
	if (flag == 'x')
		len += ft_puthexa(va_arg(args, unsigned int), 'x');
	if (flag == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_printf_flags(args, *str);
		}
		else
		{
			ft_putchar(*str);
			len++;
		}
		str++;
	}
	va_end(args);
	return (len);
}
