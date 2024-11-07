/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:44:04 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/29 15:37:15 by amados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	solve(int grid[4][4], int *views, int pos);

int	*parse_input(char *input)
{
	int	*views;
	int	i;

	i = 0;
	views = (int *)malloc(sizeof(int) * 16);
	if (!views)
		return (NULL);
	while (i < 16)
	{
		views[i] = input[i * 2] - '0';
		i++;
	}
	return (views);
}

void	print_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	grid[4][4];
	int	*views;

	if (ac != 2 || av[1][31] != '\0')
	{
		write(2, "Error\n", 6);
		return (0);
	}
	views = parse_input(av[1]);
	if (!views)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	init_grid(grid);
	if (solve(grid, views, 0))
		print_grid(grid);
	else
		write(2, "Error\n", 6);
	free(views);
	return (0);
}
