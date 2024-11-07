/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:41:13 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/02 13:53:50 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac >= 1)
	{
		while (av[0][i])
		{
			ft_putchar(av[0][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
