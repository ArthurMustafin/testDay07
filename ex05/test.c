/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:59:45 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/16 20:41:03 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char **ft_split_whitespaces(char *str);
void ft_print_words_tables(char **str);
int main(void)
{
	char *word = ("abc def ghjik 123 f gdfg 453  	dfds  	 fgd");
	printf("%s\n", word);
	char **str = ft_split_whitespaces(word);
	ft_print_words_tables(str);
	
	char *word1 = ("		 def ghjik lmnop qrs");
	printf("%s\n", word1);
	char **str1 = ft_split_whitespaces(word1);
	ft_print_words_tables(str1);

	char *word2 = ("\nabc def ghjik lmnop       \n");
	printf("%s\n", word2);
	char **str2 = ft_split_whitespaces(word2);
	ft_print_words_tables(str2);

	char *word3 = ("		abc def ghjik lmnop			");
	printf("%s\n", word3);
	char **str3 = ft_split_whitespaces(word3);
	ft_print_words_tables(str3);

	return (0);
}
