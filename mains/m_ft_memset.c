/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:51 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/01 15:51:29 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_memset(void *mem, int c, int n, int mem_size, int j)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
//	write(1, mem, mem_size);
	(void)mem_size;
	if (j == 1)
	{
		if (strcmp(mem, "cccccjjjjjjjjjj") == 0)
			printf("o ");
		else
			printf("x ");
	}
	else if (j == 2)
	{
		if (strcmp(mem, "ccccccccccccccj") == 0)
			printf("o ");
		else
			printf("x ");
	}
	else if (j == 3)
	{
		if (strcmp(mem, "\n\n\n\n\n\njjjjjjjjj") == 0)
			printf("o ");
		else
			printf("x ");
	}
	else if (j == 4)
	{
		if (*(unsigned char *)mem == '\0' && *((unsigned char *)mem + 1) == 'j')
			printf("o ");
		else
			printf("x ");
	}

	free(mem);
}

int				main(void)
{
	void	*mem;
	int		mem_size;
	int	i;

	i = 0;
	mem_size = 15;
	while ( i < 4)
	{
		if (!(mem = malloc(sizeof(*mem) * mem_size)))
			return (0);
		memset(mem, 'j', mem_size);
		if (i == 0)
		{
			printf("1:");
			check_memset(mem, 'c', 5, mem_size, 1);
			i++;
		}
		else if (i == 1)
		{
			printf("2:");
			check_memset(mem, 'c', 14, mem_size, 2);
			i++;
		}
		else if (i == 2)
		{
			printf("3:");
			check_memset(mem, '\n', 6, mem_size, 3);
			i++;
		}
		else if (i == 3)
		{
			printf("4:");
			check_memset(mem, '\0', 1, mem_size, 4);
			i++;
		}
	}
	return (0);
}
