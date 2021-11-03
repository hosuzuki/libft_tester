/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:30:55 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/01 17:21:33 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
//	printf("12");
//	ft_putnbr_fd(34, 1);
//	ft_putnbr_fd(56, 1);
//ft_putnbr_fd(78, 1);
	printf("\n1:\n2147483647 =\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");

	printf("2:\n-2147483648 =\n");
	ft_putnbr_fd(-2147483648LL, 1);
	return (0);
}
