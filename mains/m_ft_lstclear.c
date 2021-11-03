/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:15:43 by jtoty             #+#    #+#             */
/*   Updated: 2021/10/30 12:16:58 by hokutosuz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char  *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char    *ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(s1);
	dest = malloc(sizeof(*s1) * (len + 1));
	if (dest == 0)
		return (dest);
	while (i <= len)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}

static void	check_lstclear(t_list *elem, int i)
{
	if (elem)
	{
//		printf("elem is :%s\n", elem->content);
		if (i == 1)
			printf("o ");
		else
			printf("x ");
	}
	else
	{
//		printf("elem is :NULL\n");
		if (i == 0)
			printf("o ");
		else
			printf("x ");
	}
}
static int	nb_free_done;

static void			ft_delelem(void *content)
{
	free(content);
	nb_free_done++;
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
	t_list		*tmp;

//	int i = 0;
//	while (i < 2)
	while (elem)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;
//		i++;
	}
}

static t_list	*get_lst_new_elem(void *content)
{
	t_list	*elem;

//	elem = (t_list *)malloc(sizeof(t_list));
	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

static t_list	*get_elem_lst(t_list *begin, char **tab, int i, int j)
{
	t_list		*elem;

	if (!(elem = get_lst_new_elem(tab[i])))
	{
		free_lst(begin);
		free_tab(tab, j);
		return (NULL);
	}
//	printf("\ncontent(get_elem_lst) is : %s\n", elem->content);
	return (elem);
}

static char	**get_content_lst(int size)
{
	char	**tab;
	int		i;
	char	str[] = "abcdef";

	if (!(tab = (char **)malloc(sizeof(*tab) * size)))
		return (0);
//	tab[size] = 0;
	i = 0;
	while (i < size)
	{
		str[0] += 1;
		tab[i] = ft_strdup(str);
		if (!tab[i])
		{
			free_tab(tab, i - 1);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

int	main(void)
{
	t_list		*lst = NULL;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		**tab;
	int	j;

	j = 0;
	if (!(tab = get_content_lst(4)))
		return (0);
	elem = NULL;
	if (!(elem = get_elem_lst(elem, tab, 0, j)))
		return (0);
	lst = elem;
	j++;
	if (!(elem2 = get_elem_lst(elem, tab, 1, j)))
		return (0);
	j++;
	lst->next = elem2;
	if (!(elem3 = get_elem_lst(elem, tab, 2, j)))
		return (0);
	j++;
	lst->next->next = elem3;
	if (!(elem4 = get_elem_lst(elem, tab, 3, j)))
		return (0);
	lst->next->next->next = elem4;
	nb_free_done = 0;
	ft_lstclear(&elem3, &ft_delelem);
	elem2->next = NULL;
	elem4 = NULL;
	printf("1:");
	check_lstclear(elem, 1);
	printf("2:");
	check_lstclear(elem2, 1);
	printf("3:");
	check_lstclear(elem3, 0);
	printf("4:");
	check_lstclear(elem4, 0);
//	nb_free_done += '0';
	printf("5:");
//	printf("nb_free_done is:%i\n", nb_free_done);
	if (nb_free_done == 2)
		printf("o ");
	else
		printf("x ");
	printf("\n");
	free_tab(tab, 1);
	free_lst(lst);
	return (0);
}
