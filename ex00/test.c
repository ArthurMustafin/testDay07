/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:46:38 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/15 15:02:56 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char *ft_strdup(char *src);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char *str = "hello";
	char *test;
	char *test1;
	char *test2;

	test = ft_strdup(str);
	printf("should be hello - %s\n", test);	
	test1 = ft_strdup("Piscine");
	printf("should be Piscine - %s\n", test1);	
	test2 = ft_strdup("");
	printf("should be empty - %s\n", test2);	
	return (0);	


}
