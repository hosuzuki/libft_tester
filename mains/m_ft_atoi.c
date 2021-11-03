/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:58:41 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/25 07:08:03 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
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
	judge(ft_atoi("0"), atoi("0"));
	printf("%i:", 2);
	judge(ft_atoi("546.5"), atoi("546.5"));
	printf("%i:", 3);
	judge(ft_atoi("-4886"), atoi("-4886"));
	printf("%i:", 4);
	judge(ft_atoi("+548"), atoi("+548"));
	printf("%i:", 5);
	judge(ft_atoi("054854"), atoi("054854"));
	printf("%i:", 6);
	judge(ft_atoi("000074"), atoi("000074"));
	printf("%i:", 7);
	judge(ft_atoi("+-54"), atoi("+-54"));
	printf("%i:", 8);
	judge(ft_atoi("-+48"), atoi("-+48"));
	printf("%i:", 9);
	judge(ft_atoi("--47"), atoi("--47"));
	printf("%i:", 10);
	judge(ft_atoi("++47"), atoi("++47"));
	printf("%i:", 11);
	judge(ft_atoi("-47-5"), atoi("-47-5"));
	printf("%i:", 12);
	judge(ft_atoi("\e475"), atoi("\e475"));
	printf("%i:", 13);
	judge(ft_atoi("\t\n\r\v\f  469 \n"), atoi("\t\n\r\v\f  469 \n"));
	printf("%i:", 14);
	judge(ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("%i:", 15);
	judge(ft_atoi("2147483647"), atoi("2147483647"));
	printf("%i:", 16);
	judge(ft_atoi("\t\n\r\v\fd469 \n"), atoi("\t\n\r\v\fd469 \n"));
	printf("%i:", 17);
	judge(ft_atoi("\n\n\n  -46\b9 \n5d6"), atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%i:", 18);
	judge(ft_atoi(""), atoi(""));
//	printf("ft_atoi is: %i\n", ft_atoi(""));
//	printf("atoi is: %i\n", atoi(""));
	printf("\n");
}
