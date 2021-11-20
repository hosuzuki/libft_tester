/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 11:59:07 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/19 16:03:37 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <errno.h>

/*
int main(void)
{
	size_t i = SIZE_MAX - 2;
	size_t j = SIZE_MAX - 977;
	size_t sum;

	printf("i : %zu\n", i);
	printf("j : %zu\n", j);
//	i = 100;
//	j = 100;
	sum = i * j;
	printf("sum : %zu\n", sum);

	if (sum / i != j)
		printf("BAD");
	else
		printf("GOOD");
}

*/
static void judge(char *mem, char *mem1)
{
	if (mem == NULL && mem1 == NULL)
		printf("o ");
	else if (memcmp(mem, mem1, 30) == 0)
		printf("o ");
	else
		printf("x ");
	//printf("\nft_calloc: %s\n", mem);
	//printf("   calloc: %s\n", mem1);
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
		str1[i] = 'a';
		str[i] = 'a';
	}
	judge(str, str1);
	//	printf("str1 is : %s\n", str1);
	//	printf("str is :%c\n", str[0]);
	//	printf("str1 is :%c\n", str1[0]);
	printf("3:");
	char *str2;
	char *str3;
	str2 = (char *)ft_calloc(SIZE_MAX, SIZE_MAX);
	str3 = (char *)calloc(SIZE_MAX, SIZE_MAX);
	judge(str2, str3);
	free(str);
	free(str1);

	printf("4:");

	size_t count = SIZE_MAX/4 + 10;
	size_t size = sizeof(int);
	int init_errno = errno;
	char *lib_ret = calloc(count, size);
	int lib_errno = errno;
	errno = init_errno;
	char *ft_ret = ft_calloc(count, size);
	int ft_errno = errno;

	if (lib_errno == ft_errno && lib_ret == NULL && ft_ret == NULL)
	{
		if (strcmp(strerror(lib_errno), strerror(ft_errno)) == 0)
			printf("o ");
	}
	else
		printf("x ");
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>
#include <errno.h>
#include "libft.h"

int main(void) 
{
	size_t count = SIZE_MAX/4 + 10;
	size_t size = sizeof(int);
	int init_errno = errno;
	char *lib_ret = calloc(count, size);
	int lib_errno = errno;
	errno = init_errno;
	char *ft_ret = ft_calloc(count, size);
	int ft_errno = errno;

	printf("count * size : %zu\n", count * size);
	printf("calloc    malloc_size : %zu\n", malloc_size(lib_ret));
	fprintf(stderr, "errno : %d %s\n", lib_errno, strerror(lib_errno));
	errno = init_errno;
	printf("ft_calloc malloc_size : %zu\n", malloc_size(ft_ret));
	fprintf(stderr, "errno : %d %s\n", ft_errno, strerror(ft_errno));
}
*/
