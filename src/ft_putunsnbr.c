/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:59:58 by diserran          #+#    #+#             */
/*   Updated: 2023/02/19 18:19:23 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_convert_number(long zbk)
{
	if (zbk > 9)
	{
		ft_putnbr(zbk / 10);
		ft_putchar(zbk % 10 + '0');
	}
	else
		ft_putchar(zbk + '0');
}

static int	ft_count_number(unsigned int i)
{
	int	len;

	len = 0;
	if (i == 0)
		len++;
	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

int	ft_putunsnbr(unsigned int nb)
{
	long	zbk;

	zbk = nb;
	ft_convert_number(zbk);
	return (ft_count_number(nb));
}
