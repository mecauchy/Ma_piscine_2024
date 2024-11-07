/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:01:47 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/21 13:13:25 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	tab[5] = {0,-2,3,4,5};
	int 	size;
	int	i;

	size = 5;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		i++;
	}
}*/
