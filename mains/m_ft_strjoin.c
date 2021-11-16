/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:33:59 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/16 14:43:31 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void	check_strjoin(char *s1, char *s2)
{
	char	*str1;
	char	*str2;
	if (!(str2 = strjoin(s1, s2)));
		ft_print_result("NULL");
	if (!(str1 = ft_strjoin(s1, s2)))
		ft_print_result("NULL");
	else
	{
		if (strcmp(str1, str2) == 0)
			printf("o ");
		else
			printf("x ");
	}
	free(str1);
	free(str2);
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
	int i;

	for (int i = 1; i < 8; i++)
	{
		printf("%i:", i);
		if (i == 1)
			check_strjoin(s1, s2);
		else if(i == 2)
		{
			s3[0] = '\0';
			check_strjoin(s3, s4);
		}
		else if (i == 3)
		{
			s6[0] = '\0';
			check_strjoin(s5, s6);
		}
		else if (i == 4)
		{
			s7[0] = '\0';
			s8[0] = '\0';
			check_strjoin(s7, s8);
		}
	return (0);
}
