/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:06 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/19 13:23:16 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>


static void		check_memcpy(void *dest, void *dest1, void *src, int n)
{
	if (dest != ft_memcpy(dest, src, n))
		printf("dst address wasn't returned\n");
	if (dest1 != memcpy(dest1, src, n))
		printf("dst address wasn't returned\n");
///	printf("dst is: %s\n", dest);
	if (dest == NULL && dest1 == NULL)
		printf("o ");
	else if (memcmp(dest, dest1, n) == 0)
		printf("o ");
	else
		printf("x ");
	free(dest);
	free(dest1);
}

int	main(void)
{
	void	*mem;
	void	*mem1;
	int	i = 1;

	while (i < 7)
	{
		if (!(mem = malloc(sizeof(*mem) * 21)))
			return (0);
		if (!(mem1 = malloc(sizeof(*mem1) * 21)))
			return (0);
		memset(mem, 'j', 20);
		memset(mem1, 'j', 20);
		*(unsigned char *)(mem + 20) = '\0';
		*(unsigned char *)(mem1 + 20) = '\0';
		printf("%i:", i);
		if (i == 1)
		{
			check_memcpy(mem, mem1, "zyxwvutsrqponmlkjihgfedcba", 14);
			i++;
		}
		else if (i == 2)
		{
			check_memcpy(mem, mem1, "zyxwvutst", 0);
			i++;
		}
		else if (i == 3)
		{
			check_memcpy(mem, mem1,  "zy\0xw\0vu\0\0tsr", 11);
			i++;
		}
		else if (i == 4)
		{
			check_memcpy(mem, mem1, "", 11);
			i++;
		}
		else if (i == 5)
		{
			check_memcpy(mem, mem1, "zy\0xw\0vu\0\0tsr", 11);
			i++;
		}
		else if (i == 6)
		{
			void *mem2 = NULL;
			void *mem3 = NULL;
			check_memcpy(mem2, mem3, NULL, 7);
			i++;
		}
	}
	return (0);
}

/*
int main(void)
{
	char c[256] = "42tokyo";
	
//	printf("%p\n", memcpy(NULL, NULL, 4)); // 0x0
//	printf("%p\n", ft_memcpy(NULL, NULL, 4)); // 0x0
//	printf("%p\n", memcpy(c , NULL, 4)); // segmentation fault
//	printf("%p\n", ft_memcpy(c , NULL, 4)); // segmentation fault
//	printf("%p\n", memcpy(NULL, c , 4)); // segmentation fault
//	printf("%p\n", ft_memcpy(NULL, c , 4)); // segmentation fault
}

*/
