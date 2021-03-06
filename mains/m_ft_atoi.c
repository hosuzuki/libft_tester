/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:58:41 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/25 10:36:06 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <limits.h>

static void judge(int i, int j)
{
	if (i == j)
		printf("o ");
	else
		printf("x ");
}

int	main(void)
{
	printf("%i:", 1);
	judge(ft_atoi("0"), atoi("0"));
	printf("%i:", 2);
	judge(ft_atoi("546.5"), atoi("546.5"));
	printf("%i:", 3);
	judge(ft_atoi("-4886"), atoi("-4886"));
	printf("%i:", 4);
	judge(ft_atoi("+548"), atoi("+548"));
	printf("%i:", 5);
	judge(ft_atoi("054854"), atoi("054854"));
	printf("%i:", 6);
	judge(ft_atoi("000074"), atoi("000074"));
	printf("%i:", 7);
	judge(ft_atoi("+-54"), atoi("+-54"));
	printf("%i:", 8);
	judge(ft_atoi("-+48"), atoi("-+48"));
	printf("%i:", 9);
	judge(ft_atoi("--47"), atoi("--47"));
	printf("%i:", 10);
	judge(ft_atoi("++47"), atoi("++47"));
	printf("%i:", 11);
	judge(ft_atoi("-47-5"), atoi("-47-5"));
	printf("%i:", 12);
	judge(ft_atoi("\e475"), atoi("\e475"));
	printf("%i:", 13);
	judge(ft_atoi("\t\n\r\v\f  469 \n"), atoi("\t\n\r\v\f  469 \n"));
	printf("%i:", 14);
	judge(ft_atoi("-2147483648"), atoi("-2147483648"));
	
//	printf("\nst :  %d\n",    atoi("2147483645"));
//	printf("ft :  %d\n", ft_atoi("2147483645"));
//	printf("\nst :  %d\n",    atoi("2147483646"));
//	printf("ft :  %d\n", ft_atoi("2147483646"));
//	printf("\nst :  %d\n",    atoi("2147483647"));
//	printf("ft :  %d\n", ft_atoi("2147483647"));
//	printf("\n2147483648\n");
//	printf("\nst :  %d\n",    atoi("2147483648"));
//	printf("ft :  %d\n", ft_atoi("2147483648"));
//	printf("\nst :  %d\n",    atoi("2147483649"));
//	printf("ft :  %d\n", ft_atoi("2147483649"));
//	printf("\nst :  %d\n",    atoi("-2147483646"));
//	printf("ft :  %d\n", ft_atoi("-2147483646"));
//	printf("\nst :  %d\n",    atoi("-2147483647"));
//	printf("ft :  %d\n", ft_atoi("-2147483647"));
//	printf("\nst :  %d\n",    atoi("-2147483648"));
//	printf("ft :  %d\n", ft_atoi("-2147483648"));
///	printf("\n-2147483649\n");
	//printf("\nst :  %d\n",    atoi("-2147483649"));
	//printf("ft :  %d\n", ft_atoi("-2147483649"));
	printf("%i:", 15);
	judge(ft_atoi("2147483647"), atoi("2147483647"));
	printf("%i:", 16);
	judge(ft_atoi("\t\n\r\v\fd469 \n"), atoi("\t\n\r\v\fd469 \n"));
	printf("%i:", 17);
	judge(ft_atoi("\n\n\n  -46\b9 \n5d6"), atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%i:", 18);
	judge(ft_atoi(""), atoi(""));
	//	printf("ft_atoi is: %i\n", ft_atoi(""));
	//	printf("atoi is: %i\n", atoi(""));

	//printf("\n9223372036854775802\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775802"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775802"));
	//printf("\n9223372036854775803\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775803"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775803"));
	//printf("\n9223372036854775804\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775804"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775804"));
	//printf("\n9223372036854775805\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775805"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775805"));
	//printf("\n9223372036854775806\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775806"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775806"));
	//printf("\n9223372036854775807\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775807"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775807"));
	//printf("\n9223372036854775808\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775808"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775808"));
	//printf("\n9223372036854775809\n");
	//	printf("\nst :  %d\n",    atoi("9223372036854775809"));
		//printf("ft :  %d\n", ft_atoi("9223372036854775809"));

	//printf("\n-9223372036854775802\n");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775802"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775802"));
	//printf("\n-9223372036854775803\n");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775803"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775803"));
	//printf("\n-9223372036854775804\n");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775804"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775804"));
	//printf("\n-9223372036854775805\n");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775805"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775805"));
	//printf("\n-9223372036854775806\n");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775806"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775806"));
	//printf("\n-9223372036854775807\n");
		//printf("\nst :  %d\n",    atoi("-9223372036854775807"));
		//printf("ft :  %d\n", ft_atoi("-9223372036854775807"));
	//printf("\n-9223372036854775808\n");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775808"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775808"));
	//printf("\n-9223372036854775809\n");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775809"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775809"));

	printf("19:");
	//	printf("\nst :  %d\n",    atoi("9223372036854775806"));
	//	printf("ft :  %d\n", ft_atoi("9223372036854775806"));
	judge(ft_atoi("9223372036854775806"), atoi("9223372036854775806"));
	printf("20:");
//		printf("\nst :  %d\n",    atoi("9223372036854775807"));
//		printf("ft :  %d\n", ft_atoi("9223372036854775807"));
	judge(ft_atoi("9223372036854775807"), atoi("9223372036854775807"));
	printf("21:");// over long max
/*	printf("\nst :  %d\n",    atoi("9223372036854775808"));
	printf("ft :  %d\n", ft_atoi("9223372036854775808"));
	printf("21.5:");// over long max
	printf("\nst :  %d\n",    atoi("9223372036854775809"));
	printf("ft :  %d\n", ft_atoi("9223372036854775809"));
*/
	judge(ft_atoi("9223372036854775808"), atoi("9223372036854775808"));
	printf("22:");
	//printf("\nst :  %d\n",    atoi("-9223372036854775807"));
	//printf("ft :  %d\n", ft_atoi("-9223372036854775807"));
	judge(ft_atoi("-9223372036854775807"), atoi("-9223372036854775807"));
	printf("23:");
	//	printf("\nst :  %d\n",    atoi("-9223372036854775808"));
	//	printf("ft :  %d\n", ft_atoi("-9223372036854775808"));
	judge(ft_atoi("-9223372036854775808"), atoi("-9223372036854775808"));
	printf("24:"); //over long min
//		printf("\nst :  %d\n",    atoi("-9223372036854775809"));
//		printf("ft :  %d\n", ft_atoi("-9223372036854775809"));
	judge(ft_atoi("-9223372036854775809"), atoi("-9223372036854775809"));
	printf("25:");
//		printf("\nst :  %d\n",    atoi("-9223372036854775810"));
//		printf("ft :  %d\n", ft_atoi("-9223372036854775810"));
	judge(ft_atoi("-9223372036854775810"), atoi("-9223372036854775810"));
	printf("26:");
//		printf("\nst :  %d\n",    atoi("99223372036854775810"));
//		printf("ft :  %d\n", ft_atoi("99223372036854775810"));
	judge(ft_atoi("99223372036854775810"), atoi("99223372036854775810"));
	//9223372036854775807
//		printf("\nLONG_MAX is: %ld\n", LONG_MAX);
//		printf("LONG MIN is: %ld\n", LONG_MIN);
//		printf("LONG LONG_MAX is: %lld\n", LLONG_MAX);
//		printf("LONG LONG MIN is: %lld\n", LLONG_MIN);
//	size_t t;
//	long l;
//	printf("size_t = %lu\nt = %lu\nlong = %lu\nl = %lu\nlong long = %lu\n",
//	sizeof(size_t), sizeof t, sizeof(long), sizeof l, sizeof(long long));
}
