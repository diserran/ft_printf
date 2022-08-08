/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:03:22 by diserran          #+#    #+#             */
/*   Updated: 2022/08/08 13:39:32 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;

	va_start(args, str);

	while (*str != '\0')
	{
		if (*str == 'c')
			ft_putchar(va_arg(args, int));
		/* if (*str == 's')
			ft_putstr(va_arg(args, char)); */
		++str;
	}

	va_end(args);
	return (0);
}
