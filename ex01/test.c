/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:46:38 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/15 15:46:11 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int *ft_range(int min, int max);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int *arr;	int *arr1;	int *arr2;	int *arr3;	int *arr4;
	int *arr5;	
	int max;	int min;
	
	max = 5; min = 1;
	arr = ft_range(min, max);
	printf("should be between %d and %d - ", min, max);
	for (int i=0; i<max-min; i++)
		printf("%d ", arr[i]);
	printf("\n");

	max = 5; min = -1;
	arr1 = ft_range(min, max);
	printf("should be between %d and %d - ", min, max);
	for (int i=0; i<max-min; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	max = 0; min = -3;
	arr2 = ft_range(min, max);
	printf("should be between %d and %d - ", min, max);
	for (int i=0; i<max-min; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	max = -1; min = -7;
	arr3 = ft_range(min, max);
	printf("should be between %d and %d - ", min, max);
	for (int i=0; i<max-min; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	max = 3; min = 5;
	arr4 = ft_range(min, max);
	printf("should be between %d and %d - ", min, max);
	for (int i=0; i<max-min; i++)
		printf("%d ", arr4[i]);
	printf("\n");

	max = 5; min = 5;
	arr5 = ft_range(min, max);
	printf("should be between %d and %d - ", min, max);
	for (int i=0; i<max-min; i++)
		printf("%d ", arr5[i]);
	printf("\n");

	return (0);
}
