/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:01:24 by diserran          #+#    #+#             */
/*   Updated: 2023/02/19 18:19:18 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_convert_number(long zbk)
{
	if (zbk < 0)
	{
		ft_putchar('-');
		zbk = -zbk;
	}
	if (zbk > 9)
	{
		ft_putnbr(zbk / 10);
		ft_putchar(zbk % 10 + '0');
	}
	else
		ft_putchar(zbk + '0');
}

static int	ft_count_number(int i)
{
	int	len;

	len = 0;
	if (i < 0)
	{
		i = -i;
		len++;
	}
	if (i == 0)
		len++;
	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	long	zbk;

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		zbk = nb;
		ft_convert_number(zbk);
	}
	return (ft_count_number(nb));
}
