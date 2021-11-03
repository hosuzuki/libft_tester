/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:19:22 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/03 13:00:05 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static void judge(int	i)
{
	char c[20];

	sprintf(c, "%i", i);
//	printf("ft_itoa is : %s\n", ft_itoa(i));
	if (strcmp(ft_itoa(i), c) == 0)
		printf("o ");
	else
		printf("x ");
}

int	main(void)
{
	printf("%i:", 1);
	judge(0);
	printf("%i:", 2);
	judge(-9);
	printf("%i:", 3);
	judge(10);
	printf("%i:", 4);
	judge(-10);
	printf("%i:", 5);
	judge(8124);
	printf("%i:", 6);
	judge(-9874);
	printf("%i:", 7);
	judge(543000);
	printf("%i:", 8);
	judge(-2147483648LL);
	printf("%i:", 9);
	judge(2147483647);
	return (0);
}
