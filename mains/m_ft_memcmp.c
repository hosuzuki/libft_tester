/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:01:52 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/01 11:14:30 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		ft_print_result(int n, int j)
{
	if (n > 0)
	{
		if (j == 1)
			printf("o ");
		else
			printf("x ");
	}
	else if (n < 0)
	{
		if (j == -1)
			printf("o ");
		else
			printf("x ");
	}
	else
	{
		if (j == 0)
			printf("o ");
		else
			printf("x ");
	}
}

int	main(void)
{
	printf("1:");
	ft_print_result(ft_memcmp("salut", "salut", 5), 0);
	printf("2:");
	ft_print_result(ft_memcmp("t\200", "t\0", 2), 1);
	printf("3:");
	ft_print_result(ft_memcmp("testss", "test", 5), 1);
	printf("4:");
		ft_print_result(ft_memcmp("test", "tEst", 4), 1);
	printf("5:");
		ft_print_result(ft_memcmp("", "test", 4), -1);
	printf("6:");
		ft_print_result(ft_memcmp("test", "", 4), 1);
	printf("7:");
		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7), 0);
	printf("8:");
		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6), -1);
	printf("9:");
		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0), 0);
	return (0);
}
