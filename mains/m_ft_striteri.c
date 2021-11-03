/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:33:44 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/02 11:27:38 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		iter(unsigned int i, char *c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	main(void)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * 12);
	if (!str)
		return (0);
	else
	{
		strcpy(str, "HELLO world");
		ft_striteri(str, &iter);
		printf ("1:");
		if (strcmp(str, "hello WORLD") == 0)
			printf("o ");
		else
			printf("x ");
	}
	free(str);
	return (0);
}
