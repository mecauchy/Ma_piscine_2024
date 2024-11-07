/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:29:08 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/06 21:25:52 by lantona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

/*
char	*ft_strjoin(char *src, char *dest)
{
	char	*ret;

	ret = NULL;
	if (!src)
	{
		ret = (char *)malloc(sizeof(char) * (ft_strlen(dest) + 1));
		if (!ret)
			return (NULL);
		ft_strcpy(ret, dest);
	}
	else
	{
		ret = (char *)malloc(sizeof(char) * (ft_strlen(src)
			+ ft_strlen(dest) + 1));
		if (!ret)
			return (NULL);
		ft_strcpy(ret, src);
		ft_strcat(ret, dest);
	}
	return (ret);
}*/

void	add_suffix(int group, int position, t_list *lst)
{
	(void)position;
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->group == group && tmp->position == 0)
			ft_putstr(tmp->valeur);
		else if (tmp->position == 2)
			ft_putstr("hundred");
		tmp = tmp->next;
	}
}

void	print_dict(t_list *lst, char *str)
{
	// parser la chaine pour extraire un a un les nombre a partir de la gauche et donner le groupe et la position pour faire la correspondance clef/valeur
	int	size;
	int	i;
	t_list	*tmp;

	i = 0;
	size = ft_strlen(str) - 1; // ATTENTION soustraire 1 pour les index car commence 0
	while (size != 0)
	{
		tmp = lst_find(str[i], size % 3, size / 3, lst); // size % 3 = position 3 par 3 dans le groupe, size / 3 = groupe de 3 par 3
		if (tmp && str[i] != '0')
			ft_putstr(tmp->valeur);
		if ((size % 3 == 0 || size % 3 == 2 ) && size / 3 > 0 && str[i] != '0') // si on est dans un groupe de 3 au dessus des centaine donc rajoter -ier -iard -ions etc...
			add_suffix(size / 3, size % 3, lst); // size / 3 groupe (on envoi el groupe pour recuperer le suffix)
		i++;
		size--;
	}
}

void	launch(char *ret, char **tmp, t_list *lst)
{
	char	**dict;
	int	i;

	i = 0;
	dict = ft_split(ret, '\n');
	while (dict[i])
	{
		if (dict[i + 1])
		{
			tmp = ft_split(dict[i], ':');
			lst_add_back(&lst, lst_new(tmp[i], tmp[i + 1])); // on passe l'addresse car lst_add_back modifie la liste
			free(tmp); // sinon leak definitely lost (valgrind)
		}
		i++;
	}

}

int	ft_is_input_valid(char *filename, char *number, int ac, char **av)
{
	if (ac == 3)
	{
		filename = av[1];
		number = av[2];
		return (1);
	}
	else if (ac == 2)
	{
		filename = ft_strcpy(filename, "numbers.dict");
		number = av[1];
		return (1);
	}
	else
	{
		write(2, "Error\n", 6);
		return (0);
	}
}

int	main(int ac, char **av)
{
	char	*ret;
	char	**dict;
	int		i;
	int		j;
	t_list	*lst;
	char	**tmp;
	char	*filename;
	char	*number;

	ret = NULL;
	i = 0;
	j = 0;
	lst = create_lst();
	if(!ft_is_input_valid(filename, number, ac, av))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	number = ft_get_number(number);
	if(number[0] == '-')
		return (0);
	parse(ret, filename);
	dict = ft_split(ret, '\n');
	launch(ret, tmp, lst);
	print_dict(lst, number);
}

