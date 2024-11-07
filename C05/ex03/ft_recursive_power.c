/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:25:57 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/04 10:57:11 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(int ac, char **av)
{
	int	res;
	int	nb;
	int	power;

	nb = atoi(av[1]);
	power = atoi(av[2]);
	if (ac > 1)
	{
	        res = ft_recursive_power(nb, power);
		printf("%d\n",res);
	}
	return (0);
}*/
