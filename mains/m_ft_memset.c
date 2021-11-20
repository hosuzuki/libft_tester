/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:51 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/15 18:05:20 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_memset(void *mem, void *mem1, int c, int n, int mem_size)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	if (mem1 != memset(mem1, c, n))
		write(1, "mem's adress was not returned\n", 30);
//	write(1, mem, mem_size);
//	(void)mem_size;
	if (memcmp(mem, mem1, mem_size) == 0)
		printf("o ");
	else
		printf("x ");
	free(mem);
	free(mem1);
}

int	main(void)
{
	void	*mem;
	void	*mem1;
	int		mem_size;
	int	i;

	i = 1;
	mem_size = 15;
	while ( i < 5)
	{
		if (!(mem = malloc(sizeof(*mem) * mem_size)))
			return (0);
		memset(mem, 'j', mem_size);
		if (!(mem1 = malloc(sizeof(*mem1) * mem_size)))
			return (0);
		memset(mem1, 'j', mem_size);
		printf("%i:", i);
		if (i == 1)
		{
			check_memset(mem, mem1, 'c', 5, mem_size);
			i++;
		}
		else if (i == 2)
		{
			check_memset(mem, mem1, 'c', 14, mem_size);
			i++;
		}
		else if (i == 3)
		{
			check_memset(mem, mem1, '\n', 6, mem_size);
			i++;
		}
		else if (i == 4)
		{
			check_memset(mem, mem1, '\0', 1, mem_size);
			i++;
		}
	}
	return (0);
}
