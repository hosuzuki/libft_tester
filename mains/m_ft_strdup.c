/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:04:55 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/02 11:17:52 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
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

int	main(void)
{
	char	str[] = "HELLO WORLD!";
	char	*str_dup;

	if (!(str_dup = ft_strdup(str)))
		ft_print_result("NULL");
	else
	{
		printf("1:");
		if (strcmp(str, str_dup) == 0)
			printf("o ");
		else
			printf("x ");
	}
	if (str_dup == str)
		ft_print_result("\nstr_dup's adress == str's adress");
	else
		free(str_dup);
	return (0);
}
