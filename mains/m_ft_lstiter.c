/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:16:05 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/30 13:05:18 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

static int modify_count;

static void	ft_modify_list_with_d(char *content)
{
	int		len;

	len = 0;
	while (content[len])
	{
		content[len] = 'd';
		len++;
	}
	modify_count++;
}

void check_content(t_list	*elem)
{
	if (strcmp(elem->content, "dddddd") == 0)
//	if (elem->content == "dddddd")
		printf("o ");
	else
		printf("x ");
}

static t_list		*get_lst_new_elem(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

static void			free_tab(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

static void			free_lst(t_list *elem)
{
	t_list		*tmp;

	while (elem)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;
	}
}

static char			**get_content_lst(int size)
{
	char	**tab;
	int		i;
	char	str [] = "abcdef";

	if (!(tab = (char **)malloc(sizeof(*tab) * size + 1)))
		return (0);
	tab[size] = NULL;
	i = 0;
	while (i < size)
	{
		str[0] += i % 25;
		if (!(tab[i] = strdup(str)))
		{
			free_tab(tab, i - 1);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

static t_list		*get_elem_lst(t_list *begin, char **tab, int i)
{
	t_list		*elem;

	if (!(elem = get_lst_new_elem(tab[i])))
	{
		free_lst(begin);
		free_tab(tab, 4);
		return (NULL);
	}
	return (elem);
}

int	main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		**tab;

	if (!(tab = get_content_lst(4)))
		return (0);
	elem = NULL;
	if (!(elem = get_elem_lst(elem, tab, 0)))
		return (0);
	if (!(elem2 = get_elem_lst(elem, tab, 1)))
		return (0);
	elem->next = elem2;
	if (!(elem3 = get_elem_lst(elem, tab, 2)))
		return (0);
	elem2->next = elem3;
	if (!(elem4 = get_elem_lst(elem, tab, 3)))
		return (0);
	elem3->next = elem4;
	modify_count = 0;
	ft_lstiter(elem, (void *)&ft_modify_list_with_d);
	printf("1:");
	check_content(elem);
	printf("2:");
	check_content(elem2);
	printf("3:");
	check_content(elem3);
	printf("4:");
	check_content(elem4);
	printf("5:");
	if (modify_count == 4)
		printf("o ");
	else
		printf("x ");
	free_tab(tab, 4);
	free_lst(elem);
	return (0);
}
