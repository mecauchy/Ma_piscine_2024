/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:33:58 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/30 17:34:09 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <string.h>
#include <stdio.h> */
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

/*int	main(void)
{
	int	res;
	char	*str;

	str = "1234ab567";
	res = ft_atoi(str);
	printf("atoi %d\n", atoi(str));
	printf("%d\n", res);
	return (0);
}*/
