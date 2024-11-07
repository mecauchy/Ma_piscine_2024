/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:46:45 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/07 12:23:10 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (max <= min)
		return (NULL);
	res = (int *)malloc(sizeof(int) * (max - min));
	if (!res)
		return (0);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int	*res;
	int	min;
	int	max;
	int	i;

	min = 4;
	max = 7;
	i = 0;
	res = ft_range(min, max);
	printf("rst %d\n", res);
	printf("%d %d %d\n", res[0], res[1], res[2]);
	free(res);
	return (0);
}*/
