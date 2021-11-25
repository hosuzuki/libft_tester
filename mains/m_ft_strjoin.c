/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:33:59 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/25 10:37:31 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			check_strjoin(char *s1, char *s2, int j)
{
	char	*strjoin;

	if (!(strjoin = ft_strjoin(s1, s2)))
		ft_print_result("NULL");
	else
	{
		if (j == 1)
		{
			if (strcmp(strjoin, "HELLO WORLDhello world") == 0)
				printf("o ");
			else
				printf("x ");
		}
		else if (j == 2)
		{
			if (strcmp(strjoin, "hello world") == 0)
				printf("o ");
			else
				printf("x ");
		}
		else if (j == 3)
		{
			if (strcmp(strjoin, "HELLO WORLD") == 0)
				printf("o ");
			else
				printf("x ");
		}
		else if (j == 4)
		{
			if (strjoin[0] == '\0')
				printf("o ");
			else
				printf("x ");
		}
	}
	if (strjoin == s1 || strjoin == s2)
		ft_print_result("\nA new string was not returned");
	else
		free(strjoin);
}

int	main(void)
{
	char	s1[] = "HELLO WORLD";
	char	s2[] = "hello world";
	char	s3[] = "HELLO WORLD";
	char	s4[] = "hello world";
	char	s5[] = "HELLO WORLD";
	char	s6[] = "hello world";
	char	s7[] = "HELLO WORLD";
	char	s8[] = "hello world";

	printf("1:");
	check_strjoin(s1, s2, 1);
	printf("2:");
	{
		s3[0] = '\0';
		check_strjoin(s3, s4, 2);
	}
	printf("3:");
	{
		s6[0] = '\0';
		check_strjoin(s5, s6, 3);
	}
	printf("4:");
	{
		s7[0] = '\0';
		s8[0] = '\0';
		check_strjoin(s7, s8, 4);
	}
	return (0);
}
