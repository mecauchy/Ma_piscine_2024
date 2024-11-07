/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:25:49 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/04 11:23:13 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdlib.h>
int	main(int ac, char **av)
{
	int	nb;

	nb = atoi(av[1]);
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}*/
