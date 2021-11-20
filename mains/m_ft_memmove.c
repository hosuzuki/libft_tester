/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:17 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/19 13:03:01 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>


static void		check_memmove(void *dest, void *dest1, void *src, void *src1, int n)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	if (dest1 != memmove(dest1, src1, n))
		write(1, "dest1's adress was not returned\n", 31);
//	printf("dest is : %s\n", dest);
	if (dest == dest1)
		printf("o ");
	else if (memcmp(dest, dest1, n) == 0)
		printf("o ");
	else
		printf("x ");
}

int	main(void)
{
	int i;

	i = 1;
	while (i < 7)
	{
		char	*dest;
		char	*dest1;
		char	src[] = "123456789123456789";
		char	src1[] = "123456789123456789";
		dest = src + 1;
		dest1 = src1 + 1;
		printf("%i:", i);
		if (i == 1)
		{
			check_memmove(dest, dest1, "abcdefghijklmnopqr", "abcdefghijklmnopqr", 8);
			i++;
		}
		else if (i == 2)
		{
			check_memmove(dest, dest1, "hello worl\0\0!!", "hello worl\0\0!!", 14);
			i++;
		}
		else if (i == 3)
		{
			check_memmove(dest, dest1, src, src1, 8);
			i++;
		}
		else if (i == 4)
		{
			check_memmove(src, src1, dest, dest1, 8);
			i++;
		}
		else if (i == 5)
		{
			check_memmove(src, src1, dest, dest1, 0);
			i++;
		}
		else if (i == 6)
		{
			check_memmove(NULL, NULL, NULL, NULL, 0);
			i++;
		}
	}
	return (0);
}

/*

int main(void)
{
	char c[256] = "42tokyo";
	
//	printf("%p\n", memmove(NULL, NULL, 4)); // 0x0
//	printf("%p\n", ft_memmove(NULL, NULL, 4)); // 0x0
//	printf("%p\n", memmove(c , NULL, 4)); // segmentation fault
//	printf("%p\n", ft_memmove(c , NULL, 4)); // segmentation fault
//	printf("%p\n", memmove(NULL, c , 4)); // segmentation fault
//	printf("%p\n", ft_memmove(NULL, c , 4)); // segmentation fault
}

*/
