/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:10:28 by diserran          #+#    #+#             */
/*   Updated: 2022/08/10 13:51:55 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(int nb)
{
	long int	quotient;
	int			temp;
	int			a;
	int			len;
	char		hexanum_decimal[100];

	quotient = nb;
	temp = 0;
	len = 0;
	a = 0;
	while (quotient != 0)
	{
		temp = quotient % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexanum_decimal[a++] = temp;
		quotient = quotient / 16;
	}
	a = a - 1;
	while (a >= 0)
		len += ft_putchar(hexanum_decimal[a--]);
	return (len);
}
