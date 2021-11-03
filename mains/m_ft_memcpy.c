/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:06 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/01 12:17:28 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdio.h>

static void		check_memcpy(void *dest, void *src, int n, int i)
{
	if (dest != ft_memcpy(dest, src, n))
		printf("dst address wasn't returned\n");
//	printf("dst is: %s\n", dest);
	if (i == 0)
	{
		if (strcmp(dest, "zyxwvutsrqponmjjjjjj") == 0)
			printf("o ");
		else
			printf("x ");
	}
	else if (i == 1)
	{
		if (strcmp(dest, "jjjjjjjjjjjjjjjjjjjj") == 0)
			printf("o ");
		else
			printf("x ");
	}
	else if (i == 2)
	{
		if (strcmp(dest, "zy") == 0 && *((unsigned char *)dest + 7) == 'u')
			printf("o ");
		else
			printf("x ");
	}
	free(dest);
}

int	main(void)
{
	void	*mem;
	int	i = 0;;

	if (!(mem = malloc(sizeof(*mem) * 21)))
		return (0);
	memset(mem, 'j', 20);
	*(unsigned char *)(mem + 20) = '\0';
	printf("1:");
	check_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14, i);
	i++;

	if (!(mem = malloc(sizeof(*mem) * 21)))
		return (0);
	memset(mem, 'j', 20);
	*(unsigned char *)(mem + 20) = '\0';
	printf("2:");
	check_memcpy(mem, "zyxwvutst", 0, i);
	i++;

	if (!(mem = malloc(sizeof(*mem) * 21)))
		return (0);
	memset(mem, 'j', 20);
	*(unsigned char *)(mem + 20) = '\0';
	printf("3:");
	check_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11, i);
	return (0);
}
