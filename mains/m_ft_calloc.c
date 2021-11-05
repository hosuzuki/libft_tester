/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 11:59:07 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/04 12:51:14 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static void judge(char *mem, char *mem1)
{
	if (strcmp(mem, mem1) == 0)
		printf("o ");
	else
		printf("x ");
}

int	main(void)
{
	char	*str;
	char	*str1;

	str = (char *)ft_calloc(30, sizeof(char));
	str1 = (char *)calloc(30, sizeof(char));
	printf("1:");
	judge(str, str1);

	printf("2:");
	for (int i = 0; i < 10; i++)
	{
		str1[i] = '0';
		str[i] = '0';
	}
	judge(str, str1);
//	printf("str1 is : %s\n", str1);
//	printf("str is :%c\n", str[0]);
//	printf("str1 is :%c\n", str1[0]);
	free(str);
	free(str1);
	return (0);
}
