/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amados-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:25:22 by amados-s          #+#    #+#             */
/*   Updated: 2024/09/29 15:27:14 by amados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_from_left(int *line, int expected);
int	check_view_from_right(int *line, int expected);

int	check_view_from_top(int *column, int expected)
{
	return (check_view_from_left(column, expected));
}

int	check_view_from_bottom(int *column, int expected)
{
	return (check_view_from_right(column, expected));
}

int	check_col_views(int grid[4][4], int *views, int col)
{
	int	column[4];
	int	j;

	j = 0;
	while (j < 4)
	{
		column[j] = grid[j][col];
		j++;
	}
	return (check_view_from_top(column, views[0 + col])
		&& check_view_from_bottom(column, views[4 + col]));
}

int	check_row_views(int grid[4][4], int *views, int row)
{
	return (check_view_from_left(grid[row], views[8 + row])
		&& check_view_from_right(grid[row], views[12 + row]));
}

int	check_solution(int grid[4][4], int *views)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row_views(grid, views, i)
			|| !check_col_views(grid, views, i))
			return (0);
		i++;
	}
	return (1);
}
