/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:56:18 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/19 15:56:58 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	nb;

	nb = '0';
	while (nb <= '9')
	{
		ft_putchar(nb);
		nb++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}*/
