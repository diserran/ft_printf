/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:01:24 by diserran          #+#    #+#             */
/*   Updated: 2022/08/09 21:04:38 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_number(long zbk)
{
	if (zbk < 0)
	{
		ft_putchar('-');
		zbk = -zbk;
		if (zbk > 9)
		{
			ft_putnbr(zbk / 10);
			ft_putchar(zbk % 10 + '0');
		}
		else
		{
			ft_putchar(zbk + '0');
		}
	}
	else if (zbk > 9)
	{
		ft_putnbr(zbk / 10);
		ft_putchar(zbk % 10 + '0');
	}
	else
	{
		ft_putchar(zbk + '0');
	}
}

void	ft_putnbr(int nb)
{
	long	zbk;

	zbk = nb;
	ft_convert_number(zbk);
}
