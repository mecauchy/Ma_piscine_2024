/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amados-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:13:55 by amados-s          #+#    #+#             */
/*   Updated: 2024/09/29 12:45:23 by amados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_solution(int grid[4][4], int *views);

int	is_safe(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int grid[4][4], int *views, int pos)
{
	int	row;
	int	col;
	int	num;

	row = pos / 4;
	col = pos % 4;
	num = 1;
	if (pos == 16)
		return (check_solution(grid, views));
	while (num <= 4)
	{
		if (is_safe(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (solve(grid, views, pos + 1) == 1)
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
