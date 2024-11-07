/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:23:14 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/04 11:33:11 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (nb >= 0)
	{
		if (nb == 0)
			return (i);
		nb = nb - n;
		n = n + 2;
		i++;
	}
	return (0);
}

/*#include <stdlib.h>
int	main(int ac, char **av)
{
	int	nb;

	nb = atoi(av[1]);
	printf("%d\n", ft_sqrt(nb));
	return (0);
}*/
