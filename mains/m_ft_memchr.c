/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:01:40 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/31 10:05:53 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_memchr(void *s, char c, int n, void	*answer)
{
	const char *str;

	str = ft_memchr(s, c, n);
    if (str == NULL)
	{
	    if (answer == NULL)
	       	printf("o ");
	    else
		    printf("x" );
	}
	else
	{
	    if(strcmp(str, (char	*)answer) == 0)
//    if (strcmp(str, answer) == 0)
	    	printf("o ");
	    else
		    printf("x" );
	}
}

int	main(void)
{
	printf("1:");
	check_memchr("bonjour", 'b', 4, "bonjour");
	printf("2:");
	check_memchr("bonjour", 'o', 7, "onjour");
	printf("3:");
	check_memchr("bonjourno", 'n', 2, NULL);
	printf("4");
	check_memchr("bonjour", 'j', 6, "jour");
	printf("5:");
	check_memchr("bonjour", 's', 7, NULL);
	printf("6:");
	check_memchr("bonjour", 'h', 100, NULL);
//	printf("7:");
//	int tab[7] = {-49, 49, 1, -1, 0, 10, 100};
//	printf("%s\n", (char)ft_memchr(tab, -1, 7));
//	check_memchr(tab, -1, 7, );
	return (0);
}
