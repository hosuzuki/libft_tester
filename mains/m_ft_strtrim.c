/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:35:29 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/18 22:34:11 by hokutosuz        ###   ########.fr       */
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

static void		check_strtrim(char *s1, char *set, int i)
{
	char	*strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
	{
//		printf("\nft_strtrim: %s\n", strtrim);
		if (i == 1)
		{
			if (strcmp(strtrim, "hello \n \t wo\nrld") == 0)
				printf("o ");
			else
				printf("x ");
		}
		else if (i == 2 || i == 3)
		{
			if (strcmp(strtrim, "hello world") == 0)
				printf("o ");
			else
				printf("x ");
		}
		else if (i == 4)
		{
			if (strcmp(strtrim, "hello\n worl\td") == 0)
				printf("o ");
			else
				printf("x ");
		}
		else if (i == 5 || i == 6)
		{
			if (strtrim[0] == '\0')
				printf("o ");
			else
				printf("x ");
		}
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
	}
}

int main(void)
{
	char	set [] = "\t \n";
	int	i;

	i = 1;
	while (i < 7)
	{
		printf("%i:", i);
		if (i == 1)
		{
			char s1[] = "hello \n \t wo\nrld";
			check_strtrim(s1, set, i);
		}
		else if (i == 2)
		{
			char s1[] = "hello world \n \t ";
			check_strtrim(s1, set, i);
		}
		else if (i == 3)
		{
			char s1[] = " \n \t hello world";
			check_strtrim(s1, set, i);
		}
		else if (i == 4)
		{
			char s1[] = "  \n  \t  hello\n worl\td  \t \n ";
			check_strtrim(s1, set, i);
		}
		else if (i == 5)
		{
			char s1[] = "          ";
			check_strtrim(s1, set, i);
		}
		else if (i == 6)
		{
			char s1[] = "\n\n\n\n\n\t\t\t\t\t\t    \t\t\t\n\n\n\n";
			check_strtrim(s1, set, i);
		}
		i++;
	}
	return (0);
}
