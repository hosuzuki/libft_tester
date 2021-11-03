/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:34:20 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/02 15:44:26 by hokutosuz        ###   ########.fr       */
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

static char		mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main(void)
{
	char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 12);
	if (!str)
		return (0);
	strcpy(str, "HeLoO WoRlD");
	if (!(strmapi = ft_strmapi(str, &mapi)))
		ft_print_result("NULL");
	else
	{
		printf("1:");
//		printf("strmapi is : %s\n", strmapi);
		if (strcmp(strmapi, "hElOo wOrLd") == 0)
			printf("o ");
		else
			printf("x ");
		if (strmapi[11] != '\0')
			ft_print_result("\nString is not null terminated");
		if (strmapi == str)
			ft_print_result("\nA new string was not returned");
		else
			free(strmapi);
	}
	free(str);
	return (0);
}
