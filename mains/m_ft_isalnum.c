/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:59:07 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/03 13:04:07 by hokutosuz        ###   ########.fr       */
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
	judge(ft_isalnum('0'), isalnum('0'));
	printf("%i:", 2);
	judge(ft_isalnum('5'), isalnum('5'));
	printf("%i:", 3);
	judge(ft_isalnum(-6), isalnum(-6));
	printf("%i:", 4);
	judge(ft_isalnum('@'), isalnum('@'));
	printf("%i:", 5);
	judge(ft_isalnum('-'), isalnum('-'));
	printf("%i:", 6);
	judge(ft_isalnum('%'), isalnum('%'));
	printf("%i:", 7);
	judge(ft_isalnum('a'), isalnum('a'));
	printf("%i:", 8);
	judge(ft_isalnum('Z'), isalnum('Z'));
	printf("%i:", 9);
	judge(ft_isalnum('\n'), isalnum('\n'));
	printf("%i:", 10);
	judge(ft_isalnum('\t'), isalnum('\t'));
	printf("%i:", 11);
	judge(ft_isalnum(' '), isalnum(' '));
	printf("%i:", 12);
	char a = 0;
	char b = 0;
	judge(ft_isalnum(a), isalnum(b));
}
