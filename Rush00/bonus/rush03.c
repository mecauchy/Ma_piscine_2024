/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achantra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:47:48 by achantra          #+#    #+#             */
/*   Updated: 2024/09/22 10:10:43 by achantra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_check_position(int x, int y, int c_x, int c_y)
{
	if (c_x == 1 && c_y == 1)
		ft_putchar('A');
	else if (c_x == 1 && c_y == y)
		ft_putchar('A');
	else if (c_x == x && c_y == 1)
		ft_putchar('C');
	else if (c_x == x && c_y == y)
		ft_putchar('C');
	else if (c_y == 1 || c_y == y || c_x == 1 || c_x == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;

	c_y = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Please enter positive values !\n", 31);
		return ;
	}
	while (c_y <= y)
	{
		c_x = 1;
		while (c_x <= x)
		{
			ft_check_position(x, y, c_x, c_y);
			c_x++;
		}
		ft_putchar('\n');
		c_y++;
	}
}
