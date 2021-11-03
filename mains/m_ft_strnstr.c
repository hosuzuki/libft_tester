/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:08:05 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/02 17:29:34 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static void		check_strnstr(char *big, char *little, int len)
{
	const char *str;
	const	char *str1;

	str = ft_strnstr(big, little, len);
	str1 = strnstr(big, little, len);
	if (str == str1)
		printf("o ");
	else
		printf("x ");
//	printf("\nstr is: %s\nstr1 is: %s\n", str, str1);
}

int	main(void)
{
	int i;
	char s[] = "hello world! Hello World! 42! Forty two!";
//	char s1[] = "hello world! Hello World! 42! Forty two!";
	
	i = 1;
	while (i < 11)
	{
		printf("%i:", i);
		if (i == 1)
			check_strnstr(s, "hello", 15);
		else if (i == 2)
			check_strnstr(s, "Hello", 20);
		else if (i == 3)
			check_strnstr(s, "rld", 35);
		else if (i == 4)
			check_strnstr(s, "", 10);
		else if (i == 5)
			check_strnstr(s, " ", 30);
		else if (i == 6)
			check_strnstr(s, "421", 30);
		else if (i == 7)
			check_strnstr(s, "consectetur", 30);
		else if (i == 8)
			check_strnstr(s, "Forty", 10);
		else if (i == 9)
			check_strnstr(s, "Hello", 17);
		else if (i == 10)
			check_strnstr(s, "Hello", 0);
		i++;
	}
	return (0);
}
