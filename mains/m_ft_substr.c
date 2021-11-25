/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:35:18 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/25 10:37:54 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

static void		check_substr(char *str, int start, size_t len, int i)
{
	char	*substr;

	substr = ft_substr(str, start, len);
//		printf("\nsubstr is: %s\n", substr);
	if (i == 1)
	{
		if (strcmp(substr, "HELLO WORL") == 0)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 2)
	{
		if (strcmp(substr, "ORLD! hell") == 0)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 3)
	{
		if (strcmp(substr, "\0") == 0)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 4)
	{
		if (strcmp(substr, "\0") == 0)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 5)
	{
		if (substr == NULL)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 6)
	{
		if (substr == NULL)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 7)
	{
		if (strcmp(substr, "") == 0)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 8)
	{
		if (strcmp(substr, "LLO WORLD! hello world!") == 0)
			printf("o ");
		else 
			printf("x ");
	}
	else if (i == 9)
	{
		if (strcmp(substr, "") == 0)
			printf("o ");
		else 
			printf("x ");
	}
	free(substr);
}

int main(void)
{
	char	str[] = "HELLO WORLD! hello world!";
	int	i;

	i = 1;
	while (i < 10)
	{
		printf("%i:", i);
		if (i == 1)
			check_substr(str, 0, 10, i);
		else if (i == 2)
			check_substr(str, 7, 10, i);
		else if (i == 3)
			check_substr(str, 7, 0, i);
		else if (i == 4)
			check_substr(str, 0, 0, i);
		else if (i == 5)
			check_substr(NULL, 2, 2, i);
		else if (i == 6)
			check_substr(NULL, 0, 0, i);
		else if (i == 7)
			check_substr(str, 50, 3, i);
		else if (i == 8)
			check_substr(str, 2, SIZE_MAX, i);
		else if (i == 9)
			check_substr(str, 100, SIZE_MAX, i);
		i++;
	}
	return (0);
}
