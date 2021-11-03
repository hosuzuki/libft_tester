/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:59:49 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/30 11:47:51 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"
#include <stdio.h>

static void judge(int i, int j)
{
	if (i == j)
		printf("o ");
	else
		printf("x ");
}


int	main(void)
{
	printf("%i:", 1);
	judge(ft_isalpha('0'), isalpha('0'));
	printf("%i:", 2);
	judge(ft_isalpha('5'), isalpha('5'));
	printf("%i:", 3);
	judge(ft_isalpha(-6), isalpha(-6));
	printf("%i:", 4);
	judge(ft_isalpha('@'), isalpha('@'));
	printf("%i:", 5);
	judge(ft_isalpha('-'), isalpha('-'));
	printf("%i:", 6);
	judge(ft_isalpha('%'), isalpha('%'));
	printf("%i:", 7);
	judge(ft_isalpha('a'), isalpha('a'));
	printf("%i:", 8);
	judge(ft_isalpha('Z'), isalpha('Z'));
	printf("%i:", 9);
	judge(ft_isalpha('\n'), isalpha('\n'));
	printf("%i:", 10);
	judge(ft_isalpha('\t'), isalpha('\t'));
	printf("%i:", 11);
	judge(ft_isalpha(' '), isalpha(' '));
	printf("%i:", 12);
	char a = 0;
	char b = 0;
	judge(ft_isalpha(a), isalpha(b));
	printf("\n");
}
