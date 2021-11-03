/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:16:30 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/31 06:25:05 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static t_list	*check_lstnew(void *content)
{
	t_list		*elem;

	if (!(elem = ft_lstnew(content)))
		return (NULL);
	else
	{
		if (elem->next)
			printf("\nnext is not NULL\n");
	}
	return (elem);
}

int 			main(void)
{
	t_list		*elem;
	int	i;

	elem = NULL;
	printf("1:");
	elem = check_lstnew("HELLO WORLD!!!");
	if (strcmp(elem->content, "HELLO WORLD!!!") == 0)
		printf("o ");
	else
		printf("x ");
	if (elem != NULL)
		free(elem);
	printf("2:");
	i = 777;
	elem = check_lstnew(&i);
//	printf("elem->content is: %i\n", *(int *)elem->content);
	if (*(int *)elem->content == 777)
		printf("o ");
	else
		printf("x ");
	if (elem != NULL)
		free(elem);
	printf("3:");
	elem = check_lstnew(NULL);
	if (elem->content == NULL)
		printf("o ");
	else
		printf("x ");
	if (elem != NULL)
		free(elem);
	return (0);
}
