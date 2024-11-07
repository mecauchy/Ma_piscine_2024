/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:48:50 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/04 10:52:03 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			res *= i;
			i++;
		}
	}
	return (res);
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	nb;
	int	res;

	nb = atoi(av[1]);
	res = ft_iterative_factorial(nb);
	if (ac > 1)
	{
		printf("%d\n", res);
	}
	return (0);
}*/
