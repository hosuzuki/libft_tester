/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:28:06 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/19 11:59:56 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_strlcpy(char *dest, char *dest1, char *src, int size, int dest_len)
{
	(void)dest_len;
	if (ft_strlcpy(dest, src, size) == strlcpy(dest1, src, size))
	{
		if (dest == NULL && dest1 == NULL)
			printf("o ");
		else if (strcmp(dest, dest1) == 0)
			printf("o ");
		else
			printf("x ");
	}
	else
		printf("x ");
}

int	main(void)
{
	char	*dest;
	char	*dest1;
	int		dest_len;
	int		i;

	i = 1;
	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
		return (0);
	if (!(dest1 = (char *)malloc(sizeof(*dest1) * dest_len)))
		return (0);
	while (i < 7)
	{
		memset(dest, 0, dest_len);
		memset(dest, 'r', 6);
		memset(dest1, 0, dest_len);
		memset(dest1, 'r', 6);
		printf("%i:", i);
		if (i == 1)
			check_strlcpy(dest, dest1, "lorem", 15, dest_len);
		else if (i == 2)
			check_strlcpy(dest, dest1, "", 15, dest_len);
		else if (i ==3)
			check_strlcpy(dest, dest1, "lorem ipsum", 3, dest_len);
		else if (i ==4)
			check_strlcpy(dest, dest1, "lorem ipsum dolor sit amet", 15, dest_len);
		else if (i == 5)
			check_strlcpy(dest, dest1, "lorem ipsum dolor sit amet", 0, dest_len);
		else if (i == 6)
			check_strlcpy(NULL, NULL, "lorem ipsum dolor sit amet", 0, dest_len);
		i++;
	}
	free(dest);
	free(dest1);
	return (0);
}

/*
int	main(void)
{
//	char c[256] = "42tokyo";

	printf("%lu\n", strlcpy(NULL , "aiueo", 0)); // 5
	printf("%lu\n", ft_strlcpy(NULL , "aiueo", 0)); // 5
	printf("%lu\n", strlcpy(NULL , "aiueo", 2)); // segmentation fault
	printf("%lu\n", ft_strlcpy(NULL , "aiueo", 2)); // segmentation fault
	printf("%lu\n", strlcpy(c , NULL , 0)); // segmentation fault
	printf("%lu\n", ft_strlcpy(c , NULL , 0)); // segmentation fault
	printf("%lu\n", strlcpy(c , NULL , 2)); // segmentation fault
	printf("%lu\n", ft_strlcpy(c , NULL , 2)); // segmentation fault
	printf("%lu\n", strlcpy(NULL , NULL , 0)); // segmentation fault
	printf("%lu\n", ft_strlcpy(NULL , NULL , 0)); // segmentation fault
	printf("%lu\n", strlcpy(NULL , NULL , 2)); // segmentation fault
	printf("%lu\n", ft_strlcpy(NULL , NULL , 2)); // segmentation fault

return (0);
}
*/
