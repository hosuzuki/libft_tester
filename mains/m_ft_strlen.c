/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:58:17 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/02 15:21:59 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		ft_print_result(int n, int i)
{
	if (n == i)
		printf("o ");
	else
		printf("x ");
//	printf("\nft_strlen:%i\n   strlen:%i\n", n, i);
}

int	main(void)
{
	int i;
	
	i = 1;
	while (i < 7)
	{
		printf("%i:", i);
		if (i == 1)
		{
			char s[] = "Hello !";
			ft_print_result(ft_strlen(s), strlen(s));
		}
		else if (i == 2)
		{
			char s1[] = "1";
			ft_print_result(ft_strlen(s1), strlen(s1));
		}
		else if (i == 3)
		{
			char s2[] = "hello\tworld\nhello\nworld\t";
			ft_print_result(ft_strlen(s2), strlen(s2));
		}
		else if (i == 4)
		{
			char s3[] = "";
			ft_print_result(ft_strlen(s3), strlen(s3));
		}
		else if (i == 5)
		{
			char s4[] = "\n\n\f\r\t";
			ft_print_result(ft_strlen(s4), strlen(s4));
		}
		else if (i == 6)
		{
			char s5[] = "   ";
			ft_print_result(ft_strlen(s5), strlen(s5));
		}
//		else if (i == 7)
//		{
//			char *s6 = NULL;
//			ft_print_result(ft_strlen(s6), strlen(s6));
//			printf("strlen(NULL) is %lu", strlen(s6));
//		}
		i++;
	}
	return (0);
}
