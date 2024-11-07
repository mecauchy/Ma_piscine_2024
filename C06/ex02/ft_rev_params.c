/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:39:55 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/01 12:40:28 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	i;
	int	end;

	i = 1;
	end = ac - 1;
	while (i < end)
	{
		ft_swap(&av[i], &av[end]);
		i++;
		end--;
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
