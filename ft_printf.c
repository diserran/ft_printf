/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:03:22 by diserran          #+#    #+#             */
/*   Updated: 2022/08/10 13:37:15 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				len += ft_putchar(va_arg(args, int));
			if (*str == 's')
				len += ft_putstr(va_arg(args, char *));
			if (*str == 'd' || *str == 'i')
				len += ft_putnbr(va_arg(args, int));
			if (*str == 'u')
				len += ft_putunsnbr(va_arg(args, unsigned int));
			if (*str == 'X')
				len += ft_puthexa(va_arg(args, int));
			if (*str == '%')
				len += ft_putchar('%');
		}
		else
		{
			ft_putchar(*str);
			len++;
		}
		++str;
	}
	va_end(args);
	return (len);
}
