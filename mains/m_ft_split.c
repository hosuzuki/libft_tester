/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:34:58 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/16 12:31:27 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
//	printf("\n");
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
//		write(1, "\n", 1);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void			check_split(char *s, char c)
{
	char	**tabstr;

	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

int	main(void)
{
	check_split("tttt1:to 2t:o t3:tttto tttt", 't');
	check_split("AAAAAA4AA:oA 5A:oA", 'A');
	check_split("", 'A');
/*
	char *s = NULL;
	check_split(s, 'a');
	char **str;
	char **str1;
	str = ft_split("PThisPPPisPanPapplePpie.PPPpleasePPenjoy!!PPPPP", 'P');
	int i = 0;
	while (i < 8)
	{
		printf("%s\n", str[i]);
		free (str[i++]);
	}
	free (str);

	//2
	str1 = ft_split("PThisPPPisPanPapplePpie.PPPpleasePPenjoy!!PPPPP", '\0');
	i = 0;
	while (i < 2)
	{
		printf("If s is 'nul': %s\n", str1[i]);
		free (str1[i++]);
	}
	free (str1);
*/
	return (0);
}
