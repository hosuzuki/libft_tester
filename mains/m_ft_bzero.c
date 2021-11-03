/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:58:52 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/25 12:44:38 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void judge(char *mem, char *mem1)
{
	if (strcmp(mem, mem1) == 0)
		printf("o ");
	else
		printf("x ");
}

int main(void)
{
	char	*mem;
	char	*mem1;
	int		len;

	len = 5;
	mem = malloc(sizeof(*mem) * len);
	if (mem == NULL)
		return (0);
	mem1 = malloc(sizeof(*mem) * len);
	if (mem1 == NULL)
		return (0);

	printf("%i:", 1);
	memset(mem, 'e', len);
	memset(mem1, 'e', len);
	ft_bzero(mem, 5);
	bzero(mem1, 5);
	judge(mem, mem1);

	printf("%i:", 2);
	memset(mem, 'e', len);
	memset(mem1, 'e', len);
	ft_bzero(mem, 0);
	int zero= 0;
	bzero(mem1, zero);
	judge(mem, mem1);

	printf("%i:", 3);
	memset(mem, 'e', len);
	memset(mem1, 'e', len);
	ft_bzero(mem, 10);
	bzero(mem1, 10);
	judge(mem, mem1);
//why doesn't it go to segmatation fault if the len is longer than the string.?
	free(mem);
	return (0);
}
