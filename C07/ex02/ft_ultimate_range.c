/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:26:22 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/07 18:11:10 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int	res;
	int	*tab;
	int	min;
	int	max;

	tab = NULL;
	min = 5;
	max = 23;
	res = ft_ultimate_range(&tab, min, max);
	printf("%d\n", res);
	free(tab);
	return (0);
}*/
