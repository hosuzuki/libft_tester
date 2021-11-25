/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:07:32 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/25 10:30:22 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		ft_print_result(int i, int j)
{
	if (i == j)
		printf("o ");
	else
//		if (i > 0 && j > 0)
	//		printf("o ");
		//else if (i < 0 && j < 0)
			//printf("o ");
		//else
			printf("x ");
//	printf("\nft_strncmp:%i\n   strncmp:%i\n", i, j);
}

int	main(void)
{

	int	i;
	
	i = 1;
	while (i < 12)
	{
		printf("%i:", i);
		if (i == 1)
			ft_print_result(ft_strncmp("salut", "salut", 5), strncmp("salut", "salut", 5));
		else if (i == 2)
			ft_print_result(ft_strncmp("test", "testss", 7), strncmp("test", "testss", 7));
		else if (i == 3)
			ft_print_result(ft_strncmp("testss", "test", 7), strncmp("testss", "test", 7));
		else if (i == 4)
			ft_print_result(ft_strncmp("test", "tEst", 4), strncmp("test", "tEst", 4));
		else if (i == 5)
			ft_print_result(ft_strncmp("", "test", 4), strncmp("", "test", 4));
		else if (i == 6)
			ft_print_result(ft_strncmp("test", "", 4), strncmp("test", "", 4));
		else if (i == 7)
			ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3),
			strncmp("abcdefghij", "abcdefgxyz", 3));
		else if (i == 8)
			ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4), 
			strncmp("abcdefgh", "abcdwxyz", 4));
		else if (i == 9)
			ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), 
			strncmp("zyxbcdefgh", "abcdwxyz", 0));
		else if (i == 10)
			ft_print_result(ft_strncmp("abcdefgh", "", 0), strncmp("abcdefgh", "", 0));
		else if (i == 11)
			ft_print_result(ft_strncmp("test\200", "test\0", 6), 
			strncmp("test\200", "test\0", 6));
		i++;
	}
	return (0);
}
