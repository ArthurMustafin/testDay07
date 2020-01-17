/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:46:38 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/16 16:36:06 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int *arr = NULL;
	int **parr;
	parr = &arr;
	int max;	int min;

	max = 5; min = 1;
	printf("lenght - %d\n", ft_ultimate_range(parr, min, max));
	printf("should be between %d and %d - ", min, max);	
	for (int i=0; i<max-min; i++){
		printf("%d ",parr[0][i]);
	}
	printf("\n");

	int	*arr1 = NULL;
	int **parr1;
	parr1 = &arr1;

	max = 5; min = -5;
	printf("length - %d\n", ft_ultimate_range(parr1, min, max));
	printf("should be between %d and %d - ", min, max);	
	for (int i=0; i<max-min; i++){
		printf("%d ",parr1[0][i]);
	}
	printf("\n");

	int *arr2 = NULL;
	int **parr2;
	parr2 = &arr2;

	max = 3; min = 8;
	printf("lenght - %d\n", ft_ultimate_range(parr2, min, max));
	printf("should be between %d and %d - ", min, max);	
	for (int i=0; i<max-min; i++){
		printf("%d ",parr2[0][i]);
	}
	printf("\n");

	int *arr3 = NULL;
	int **parr3;
	parr3 = &arr3;

	max = 5; min = 5;
	printf("length %d\n", ft_ultimate_range(parr3, min, max));
	printf("should be between %d and %d - ", min, max);	
	for (int i=0; i<max-min; i++){
		printf("%d ",parr3[0][i]);
	}
	printf("\n");

	int	*arr4 = NULL;
	int **parr4;
	parr4 = &arr4;

	max = -5; min = -10;
	printf("length %d\n", ft_ultimate_range(parr4, min, max));
	printf("should be between %d and %d - ", min, max);	
	for (int i=0; i<max-min; i++){
		printf("%d ",parr4[0][i]);
	}
	printf("\n");

	int *arr5 = NULL;
	int **parr5;
	parr5 = &arr5;

	max = -5; min = -10;
	printf("length %d\n", ft_ultimate_range(parr5, min, max));
	printf("should be between %d and %d - ", min, max);	
	for (int i=0; i<max-min; i++){
		printf("%d ",parr5[0][i]);
	}
	printf("\n");

	return (0);
}
