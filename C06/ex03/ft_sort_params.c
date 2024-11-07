/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:51:52 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/02 11:12:58 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	end;

	i = 1;
	end = ac;
	while (end - 1 > 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
			ft_swap(&av[i], &av[i + 1]);
		i++;
		if (i == end - 1)
		{
			i = 1;
			end--;
		}
	}
	end = 1;
	while (end < ac)
	{
		ft_putstr(av[end]);
		write(1, "\n", 1);
		end++;
	}
	return (0);
}
