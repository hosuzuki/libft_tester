/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:35:18 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/03 11:59:07 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_substr(char *str, int start, int len, int i)
{
	char	*substr;

	if (!(substr = ft_substr(str, start, len)))
		ft_print_result("NULL");
	else
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
	if (str == substr)
		ft_print_result("\nA new string was not returned");
	else
		free(substr);
}

int main(void)
{
	char	str[] = "HELLO WORLD! hello world!";
	int	i;

	i = 1;
	while (i < 5)
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
		i++;
	}
	return (0);
}
