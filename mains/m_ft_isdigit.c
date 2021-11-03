/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:00:21 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/03 13:02:25 by hokutosuz        ###   ########.fr       */
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
	judge(ft_isdigit(0), isdigit(0));
	printf("%i:", 2);
	judge(ft_isdigit(47), isdigit(47));
	printf("%i:", 3);
	judge(ft_isdigit('0'), isdigit('0'));
	printf("%i:", 4);
	judge(ft_isdigit('9'), isdigit('9'));
	printf("%i:", 5);
	judge(ft_isdigit(58), isdigit(58));
	printf("%i:", 6);
	judge(ft_isdigit('A'), isdigit('A'));
	printf("%i:", 7);
	judge(ft_isdigit('a'), isdigit('a'));
	printf("%i:", 8);
	judge(ft_isdigit('Z'), isdigit('Z'));
	printf("%i:", 9);
	judge(ft_isdigit('\n'), isdigit('\n'));
	printf("%i:", 10);
	judge(ft_isdigit('\t'), isdigit('\t'));
	printf("%i:", 11);
	judge(ft_isdigit(' '), isdigit(' '));
	printf("%i:", 12);
	judge(ft_isdigit(128), isdigit(128));
	return (0);
}
