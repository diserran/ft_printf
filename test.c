/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:13:14 by diserran          #+#    #+#             */
/*   Updated: 2022/08/10 13:18:36 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * C program to Convert Decimal to Hexadecimal
 */

#include <stdio.h>

/* int main()
{

	long decimalnum, quotient, remainder;
	int i, j = 0;
	char hexadecimalnum[100];

	printf("Enter decimal number: ");
	scanf("%ld", &decimalnum);
	quotient = decimalnum;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}

	// display integer into character
	for (i = j; i >= 0; i--)
		printf("%c", hexadecimalnum[i]);
	return 0;
} */

int	main(void)
{
	printf("PRIMERA VUELTA\n");
	printf("Cociente: %d\n", 800 / 16);
	printf("Resto: %d", 800 % 16);

	printf("\nDIVIDIMOS EL COCIENTE (50)\n");
	printf("Cociente: %d\n", 50 / 16);
	printf("Resto: %d", 50 % 16);

	printf("\nDIVIDIMOS EL COCIENTE (3)\n");
	printf("Cociente: %d\n", 3 / 16);
	printf("Resto: %d", 3 % 16);
	return (0);
}
