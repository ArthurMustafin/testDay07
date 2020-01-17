/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:46:38 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/16 21:07:43 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	char *str_par;
	str_par = ft_concat_params(argc, argv);
	printf("given arguments: \n%s\n", str_par);
	return (0);
}
