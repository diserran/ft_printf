/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:10:28 by diserran          #+#    #+#             */
/*   Updated: 2022/08/11 11:39:42 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long int nb, char flag)
{
	int			len;

	len = 0;
	if (nb >= 16)
	{
		len += ft_puthexa(nb / 16, flag);
		len += ft_puthexa(nb % 16, flag);
	}
	else
	{
		if (nb <= 9)
			len += ft_putchar(nb + 48);
		else
		{
			if (flag == 'X')
				len += ft_putchar(nb + 55);
			if (flag == 'x' || flag == 'p')
				len += ft_putchar(nb + 87);
		}
	}
	return (len);
}
