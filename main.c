/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:48:40 by diserran          #+#    #+#             */
/*   Updated: 2022/08/11 11:41:43 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len1;
	int	len2;

	len1 = ft_printf("Fake: Hola %d ", 1);
	printf("\nReturn propia: %i\n", len1);
	len2 = printf("Real: Hola %d ", 1);
	printf("\nReturn orginal: %i", len2);
	printf("\n");
}
