/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:03:23 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/02 11:13:18 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_strchr(char *s, int c, int j)
{
	char		*str;

	str = ft_strchr(s, c);
	if (j == 1)
	{
		if (str == s)
			printf("o ");
		else
			printf("x ");
	}
	else if (j == 2)
	{
		if (str == NULL)
			printf("o ");
		else
			printf("x ");
	}
	else if (j == 3)
	{
		if (str[0] == '\0' && str == &s[7])
			printf("o ");
		else
			printf("x ");
	}
	else if (j == 4) 
	{
		if (str[0] == '\0' && str == s)
			printf("o ");
		else
			printf("x ");
	}
}

int				main(void)
{
	char		str2[] = "bonjour";

	printf("1:");
	check_strchr(str2, 'b', 1);
	printf("2:");
	check_strchr(str2, 's', 2);
	printf("3:");
	check_strchr(str2, '\0', 3);
	printf("4:");
	{
		char	str3[] = "";
		check_strchr(str3, '\0', 4);
	}
	return (0);
}
