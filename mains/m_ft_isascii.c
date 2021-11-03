/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:00:10 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/03 13:02:49 by hokutosuz        ###   ########.fr       */
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
	judge(ft_isascii(0), isascii(0));
	printf("%i:", 2);
	judge(ft_isascii(47), isascii(47));
	printf("%i:", 3);
	judge(ft_isascii('0'), isascii('0'));
	printf("%i:", 4);
	judge(ft_isascii('9'), isascii('9'));
	printf("%i:", 5);
	judge(ft_isascii(58), isascii(58));
	printf("%i:", 6);
	judge(ft_isascii('A'), isascii('A'));
	printf("%i:", 7);
	judge(ft_isascii('a'), isascii('a'));
	printf("%i:", 8);
	judge(ft_isascii('Z'), isascii('Z'));
	printf("%i:", 9);
	judge(ft_isascii('\n'), isascii('\n'));
	printf("%i:", 10);
	judge(ft_isascii('\t'), isascii('\t'));
	printf("%i:", 11);
	judge(ft_isascii(' '), isascii(' '));
	printf("%i:", 12);
	judge(ft_isascii(128), isascii(128));
}
