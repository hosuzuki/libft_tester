/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:09:27 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/03 12:37:11 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"
#include <stdio.h>

static void		check_toupper(int start, int end, int i)
{
	int		c;
	int	j;
	
	j = 0;
	while (start <= end)
	{
		c = ft_toupper(start);
		if (c == start)
			j++;
		start++;
	}
	if (i == 1)
	{
		if(j == 48)
			printf("o ");
		else
			printf("x ");
	}
	else if (i == 2)
	{
		if(j == 10)
			printf("o ");
		else
			printf("x ");
	}
	else if (i == 3)
	{
		if(j == 7)
			printf("o ");
		else
			printf("x ");
	}
	else if (i == 4)
	{
		if (j == 26)
			printf("o ");
		else
			printf("x ");
	}
	else if (i == 5)
	{
		if(j == 6)
			printf("o ");
		else
			printf("x ");
	}
	else if (i == 6)
	{
		if(j == 0)
		{
			if (c == 'Z')
				printf("o ");
			else
				printf("x ");
		}
		else
			printf("x ");
	}	
	else if (i == 7)
	{
		if(j == 5)
			printf("o ");
		else
			printf("x ");
	}
}

int main(void)
{
	int i;

	i = 1;
	while (i < 8)
	{
		printf("%i:", i);
		if (i == 1)
			check_toupper(0, 47, i);
		else if (i == 2)
			check_toupper('0', '9', i);
		else if (i == 3)
			check_toupper(58, 64, i);
		else if (i == 4)
			check_toupper('A', 'Z', i);
		else if (i == 5)
			check_toupper(91, 96, i);
		else if (i == 6)
			check_toupper('a', 'z', i);
		else if (i == 7)
			check_toupper(123, 127, i);
		i++;
	}
	return (0);
}
