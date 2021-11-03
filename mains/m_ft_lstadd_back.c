/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:15:25 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/29 06:10:54 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

static void judge(t_list	*tmp, char **tab, int i)
{
	if (tmp->content == tab[i])
		printf("o ");
	else
		printf("x ");
}

static void	free_tab(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

static void	free_lst(t_list *elem)
{
	t_list	*tmp;

	while (elem)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;
	}
}

static t_list	*get_elem(t_list *begin, char **tab, int i)
{
	t_list		*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
	{
		free_lst(begin);
		free_tab(tab, 4);
		return (NULL);
	}
	elem->content = tab[i];
	elem->next = NULL;
	return (elem);
}

static char	**set_tab(int size)
{
	char **tab;
	char	str[] = "abcdefghi";
  int i = 0;

	tab = (char **)malloc(sizeof(*tab) * size + 1);
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		str[0] += 1;
		tab[i] = strdup(str);
		if (tab[i] == NULL)
		{
			free_tab(tab, i - 1);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

int main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*begin;
	char		**tab;
	t_list		*tmp;
	int i;
	int j;

	tab = set_tab(4);
	elem = NULL;
	if (!(elem = get_elem(elem, tab, 0)))
		return (0);
	if (!(elem2 = get_elem(elem, tab, 1)))
		return (0);
	if (!(elem3 = get_elem(elem, tab, 2)))
		return (0);
	if (!(elem4 = get_elem(elem, tab, 3)))
		return (0);
	begin = NULL;
	ft_lstadd_back(&begin, elem4);
	ft_lstadd_back(&begin, elem3);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem);
	tmp = begin;
	i = 3;
	j = 1;
	while (tmp)
	{
		//printf("content is : %s\n", tmp->content);
		printf("%i:", j);
		judge(tmp, tab, i);
		i--;
		j++;
		tmp = tmp->next;
	}
	free_tab(tab, 4);
	free_lst(begin);
	return (0);
}
