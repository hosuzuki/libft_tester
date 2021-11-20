/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:08:30 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/18 21:57:37 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_strrchr(char *s, int c, int offset)
{
	char		*str;
	char		*str1;
	
	str = ft_strrchr(s, c);
	str1 = strrchr(s, c);
	if (str == str1)
	{
		if (str == NULL && str1 == NULL)
			printf("o ");
		else if (strcmp(str, str1) == 0)
		{
			printf("o ");
			if (str != (s + offset))
				printf("\nReturn value is false");
		}
		else
			printf("x ");
	}
	else
		printf("x ");
//	printf("\nft_strrchr: %s\n", str);
//	printf("   strrchr: %s\n", str1);
}

int	main(void)
{
	char		str[] = "bonjour";
	int	i;

	i = 1;
	while (i < 9)
	{
		printf("%i:", i);
		if (i == 1)
			check_strrchr(str, 'b', 0);
		else if (i == 2)
			check_strrchr(str, 'o', 4);
		else if (i == 3)
		{
			char	str2[]= "bonjourno";
			check_strrchr(str2, 'o', 8);
		}
		else if (i == 4)
			check_strrchr(str, 'j', 3);
		else if (i == 5)
			check_strrchr(str, 's', 0);
		else if (i == 6)
			check_strrchr(str, '\0', 7);
		else if (i == 7)
		{
			char	str3[] = "";
			check_strrchr(str3, '\0', 0);
		}
		else if (i == 8)
			check_strrchr(str + 2, 'b', 0);
		i++;
	}
	return (0);
}



/*
//Case2; Segmatation Fault
int	main(void)
{
//	printf("%s\n", strrchr(NULL, 'a')); // segmentation fault
//	printf("%s\n", ft_strrchr(NULL , 'a')); // segmentation fault

return (0);
}
*/
