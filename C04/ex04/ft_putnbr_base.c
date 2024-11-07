/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:43:02 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/01 13:56:35 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_ok_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicate_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (!is_ok_base(base))
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	int		i;
	long	n;

	n = nbr;
	i = ft_strlen(base);
	len_base = ft_strlen(base);
	if (!base || !check_duplicate_base(base))
		return ;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= len_base)
	{
		ft_putnbr_base(n / len_base, base);
	}
	ft_putchar(base[n % i]);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int ac, char **av)
{
	ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);
}
