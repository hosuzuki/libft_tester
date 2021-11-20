/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:03:23 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/18 21:18:27 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>


static void		check_strchr(char *s1, char *s2, int c)
{
	char	*str1;
	char	*str2;

	str1 = ft_strchr(s1, c);
	str2 = strchr(s2, c);
	if (str1 == NULL && str2 == NULL)
		printf("o ");
	else if (strcmp(str1, str2) == 0)
		printf("o ");
	else
		printf("x ");
//	printf("\nft_strchr: %s\n", str1);
//	printf("   strchr: %s\n", str2);
}

int	main(void)
{
	char	str1[] = "bonjour";
	char	str2[] = "bonjour";
	int i = 1;
	while (i < 6)
	{
		printf("%d:", i);
		if (i == 1)
			check_strchr(str1, str2, 'b');
		else if (i == 2)
			check_strchr(str1, str2, 's');
		else if (i == 3)
			check_strchr(str1, str2, '\0');
		else if (i == 4)
		{
			char	str3[] = "";
			char	str4[] = "";
			check_strchr(str3, str4, '\0');
		}
		else if (i == 5)
			check_strchr("hello", "hello", 0);
		i++;
	}
	return (0);
}


/*
//Case2; Segmatation Fault
int	main(void)
{

//	printf("%s\n", strchr(NULL, 'a')); // segmentation fault
//	printf("%s\n", ft_strchr(NULL , 'a')); // segmentation fault

return (0);
}
*/
