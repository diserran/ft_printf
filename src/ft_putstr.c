/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:10:16 by diserran          #+#    #+#             */
/*   Updated: 2022/08/10 10:44:16 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (!str)
	{
		write(1, "(null)", 6);
		i = 6;
	}
	else
	{
		while (str[++i] != '\0')
			write(1, &str[i], 1);
	}
	return (i);
}
