/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:06:12 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/02 14:39:54 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

static void		check_strlcat(char *dest, char *dest1, char *src, int size, int dest_len)
{
	(void)dest_len;
	if (ft_strlcat(dest, src, size) == strlcat(dest1, src, size) 
		&& strcmp(dest, dest1) == 0)
		printf("o ");
	else
		printf("x ");
}

//	printf("\nft_strlcat:%zu\n", ft_strlcat(dest, src, size));
//	printf("ft_strlcat:%s\n", dest);
//	write(1, dest, dest_len);
//	write(1, "\n", 1);
//	printf("   strlcat:%lu\n", strlcat(dest1, src, size));
	//printf("   strlcat:%s\n", dest1);
//	write(1, dest, dest_len);
//	write(1, "\n", 1);

int	main(void)
{
	char	*dest;
	char	*dest1;
	int		dest_len;
	int	i;

	i = 1;
	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
		return (0);
	if (!(dest1 = (char *)malloc(sizeof(*dest1) * dest_len)))
		return (0);
	while ( i < 10)
	{
		memset(dest, 0, dest_len);
		memset(dest, 'r', 6);
		memset(dest1, 0, dest_len);
		memset(dest1, 'r', 6);
		printf("%i:", i);
		if (i == 1)
		{
			dest[11] = 'a';
			dest1[11] = 'a';
			check_strlcat(dest, dest1, "hello", 15, dest_len);
			i++;
		}
		else if (i == 2)
		{
			check_strlcat(dest, dest1,  "", 15, dest_len);
			i++;
		}
		else if (i == 3)
		{
		dest[0] = '\0';
		dest[11] = 'a';
		dest1[0] = '\0';
		dest1[11] = 'a';
		check_strlcat(dest, dest1, "lorem ipsum", 15, dest_len);
		i++;
		}
		else if (i == 4)
		{
			dest[14] = 'a';
			dest1[14] = 'a';
			check_strlcat(dest, dest1, "lorem ipsum dolor sit amet", 15, dest_len);
		i++;
		}
		else if (i == 5)
		{
			dest[10] = 'a';
			dest1[10] = 'a';
			check_strlcat(dest, dest1, "lorem ipsum dolor sit amet", 0, dest_len);
			i++;
		}
		else if (i == 6)
		{
		dest[10] = 'a';
		dest1[10] = 'a';
		check_strlcat(dest, dest1,  "lorem ipsum dolor sit amet", 1, dest_len);
		i++;
		}
		else if (i == 7)
		{
		memset(dest, 'r', 15);
		memset(dest1, 'r', 15);
		check_strlcat(dest, dest1, "lorem ipsum dolor sit amet", 5, dest_len);
		i++;
		}
		else if (i == 8)
		{
		dest[10] = 'a';
		dest1[10] = 'a';
		check_strlcat(dest, dest1, "lorem ipsum dolor sit amet", 6, dest_len);
		i++;
		}
		else if (i == 9)
		{
			memset(dest, 'r', 14);
			memset(dest1, 'r', 14);
			check_strlcat(dest, dest1, "lorem ipsum dolor sit amet", 15, dest_len);
			i++;
		}
	}
	free(dest);
	free(dest1);
	return (0);
}
