/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:23:41 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/04 10:56:21 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/*int	main(int ac, char **av)
{
	int	nb;
	int	power;

	nb = atoi(av[1]);
	power = atoi(av[2]);
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/
