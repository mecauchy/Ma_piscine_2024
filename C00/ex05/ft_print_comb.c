/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:29:41 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/19 16:42:12 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	if (a <= '7' || b <= '8' || c <= '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}	
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print(a, b, c);
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
