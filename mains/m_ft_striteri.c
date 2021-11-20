/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:33:44 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/20 10:22:51 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>


static void function(unsigned int i, char *c)
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

/*
int main(void)
{
	char s[10];

	s[0] = 'H';
	s[1] = 'w';
	s[2] = '\0';
	ft_striteri(s, &function);
	printf("s is : %s\n", s);
	return (0);
}
*/


int	main(void)
{
	char	*str;

	str = calloc(12, sizeof(char));
	if (!str)
		return (0);
	else
	{
		strcpy(str, "HELLO world");
		ft_striteri(str, &function);
		printf ("1:");
		if (strcmp(str, "hello WORLD") == 0)
			printf("o ");
		else
			printf("x ");
	}
	free(str);
	return (0);
}

/*
int main(void)
{
	static int indexArray[11] = {4};
	for (int i = 0; i < 10; i++)
		printf("%d\n", indexArray[i]);
	return (0);
}
*/
