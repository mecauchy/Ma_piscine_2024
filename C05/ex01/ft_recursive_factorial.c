/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:18:22 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/04 11:35:34 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(int ac, char **av)
{
	int	nb;
	int	res;

	nb = atoi(av[1]);
	if (ac > 1)
	{
		res = ft_recursive_factorial(nb);
		printf("%d\n", res);
	}
}*/
