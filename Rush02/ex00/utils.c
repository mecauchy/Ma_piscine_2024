/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:49:53 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/06 17:49:55 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	check_position(char *valeur)
{
	int	i;
	int	count;
	int	size;

	i = 0;
	count = 0;
	size = ft_strlen(valeur) - 1;
	return (size % 3); // 100 -> strlen = 3 - 1 = 2 -> 2 % 3 = 2 -> donc position 2 dans le groupe
}

int	check_group(char *valeur)
{
	int	i;
	int	count;
	int	size;

	i = 0;
	count = 0;
	size = ft_strlen(valeur) - 1;
	return (size / 3); // 100 -> strlen = 3 - 1 = 2 -> 2 / 3 = 0 -> donc group n°0
}

t_list	*create_lst(void)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	ret->valeur = NULL; // 100
	ret->number = NULL; // hundred
	ret->position = 0;
	ret->group = 0;
	ret->next = NULL;
	return (ret);
}

void	find_particular(char *nb, int i, t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->valeur[1] == nb[i + 1])
		{
			ft_putstr(tmp->valeur);
			return ;
		}
		tmp = tmp->next;
	}
}

t_list	*lst_find(char nb, int position, int group, t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (position > 0) // pas sur la premiere position du groupe donc nb > 9
		{
			if (tmp->valeur[0] == '1' && position > 0)
			{
			}
			else if (tmp->position == position && tmp->group == group && nb == tmp->valeur[0])
				return (tmp);
		}
		else // sur la premiere position du groupe
		{
			if (tmp->position == 0 && tmp->group == group && nb == tmp->valeur[0])
				return (tmp);
		}
		tmp = tmp->next;
	}

	return (NULL);
}

t_list	*lst_new(char *str, char *number)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	ret->valeur = str; // 100
	ret->number = number; // hundred
	ret->position = check_position(ret->valeur); // == check_position(str) // 2 car 3 eme position mais compte depuis 0
	ret->group = check_group(ret->valeur); // == check_group(str) // 0 car 1er groupe mais compte de 0
	ret->next = NULL;
	return (ret);
}

void	lst_add_back(t_list **lst, t_list *new) // &lst -> t_list *lst, new = nouvel element par ft_lstnew
{
	t_list	*tmp;

	if (!*lst) // si la liste n'existe pas encore au debut alors
	{
		*lst = new; // pointeur de tête
		return ;
	}
	tmp = *lst;
	while (tmp->next) // ft_lstlast -> deplacement au dernier elem car liste existe deja 
		tmp = tmp->next;
	tmp->next = new;
}
