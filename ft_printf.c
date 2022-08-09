/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:03:22 by diserran          #+#    #+#             */
/*   Updated: 2022/08/09 12:47:09 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	va_list	args;

	va_start(args, str);

	while (*str != '\0')
	{
		if (*str == 'c')
			ft_putchar(va_arg(args, int));
		if (*str == 's')
			ft_putstr(va_arg(args, char *));
		++str;
	}

	va_end(args);
	return (0);
}

int	main(void)
{
	char s[] = "hola";
	char s1[] = "muy";
	char s2[] = "buenas";

	ft_printf("sss", s, s1, s2);
	printf("\n");
}
