/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:25:56 by jtoty             #+#    #+#             */
/*   Updated: 2021/11/01 16:57:00 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

int		main(void)
{
	ft_putchar_fd('1', 1);
	ft_putchar_fd(':', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd(' ', 1);
	ft_putchar_fd('2', 1);
	ft_putchar_fd(':', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd(' ', 1);
	ft_putchar_fd('3', 1);
	ft_putchar_fd(':', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd(' ', 1);
	return (0);
}
