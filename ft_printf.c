/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:03:22 by diserran          #+#    #+#             */
/*   Updated: 2022/08/09 21:40:56 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	while (*str != '\0')
	{
		if (*str == 'c')
			ft_putchar(va_arg(args, int));
		if (*str == 's')
			ft_putstr(va_arg(args, char *));
		if (*str == 'd' || *str == 'i')
			ft_putnbr(va_arg(args, int));
		++str;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	char s[] = "hola";
	char s1[] = "muy";
	char s2[] = "buenas";
	int len1;
	int len2;

	len1 = ft_printf("sssd", s, s1, s2, -3);
	printf("\nReturn propia: %i\n", len1);
	len2 = printf("Real: %s %s %s %d", s, s1, s2, -3);
	printf("\nReturn orginal: %i", len2);
	printf("\n");
}
