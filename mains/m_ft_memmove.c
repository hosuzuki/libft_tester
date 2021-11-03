/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:17 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/01 15:14:50 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_memmove(void *dest, void *src, int n, int j)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
//	printf("dest is : %s\n", dest);
	if (j == 1)
	{
		if (strcmp(dest, "abcdefgh123456789") == 0)
			printf("o ");
		else
			printf("x ");
	}
//	printf("dest is :%s\n", dest);
	else if (j == 2)
	{
		if (strcmp(dest, "hello worl") == 0 && *((unsigned char *)dest + 13) == '!')
			printf("o ");
		else
			printf("x ");
//		printf("dest is :%s\n", dest);
//		printf("dest[13] is : %c\n", *((unsigned char *)dest + 13));
	}	
	else if (j == 3)
	{
		if (strcmp(dest, "1hello wrl") == 0)
			printf("o ");
		else
			printf("x ");
//		printf("dest is :%s\n", dest);
	}
	else if (j == 4)
	{
		if (strcmp(dest, "1hello wwrl") == 0)
			printf("o ");
		else
			printf("x ");
	//	printf("dest is :%s\n", dest);
	}	
	else if (j == 5)
	{
		if (strcmp(dest, "1hello wwrl") == 0)
			printf("o ");
		else
			printf("x ");
	//	printf("dest is :%s\n", dest);
	}
}

int				main(void)
{
	char	src[] = "123456789123456789";
	char	*dest;
	int j;

	j = 1;
	dest = src + 1;
	printf("1:");
	check_memmove(dest, "abcdefghijklmnopqr", 8, 1);
	j++;
	printf("2:");
	check_memmove(dest, "hello worl\0\0!!", 14, 2);
	j++;
	printf("3:");
	check_memmove(dest, src, 8, 3);
	j++;
	printf("4:");
	check_memmove(src, dest, 8, 4);
	j++;
	printf("5:");
	check_memmove(src, dest, 0, 5);
	return (0);
}
