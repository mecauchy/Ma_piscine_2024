/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amados-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:11:58 by amados-s          #+#    #+#             */
/*   Updated: 2024/09/29 13:08:25 by amados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_from_left(int *line, int expected)
{
	int	max_seen;
	int	visible;
	int	i;

	max_seen = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max_seen)
		{
			max_seen = line[i];
			visible++;
		}
		i++;
	}
	if (visible == expected)
		return (1);
	else
		return (0);
}

int	check_view_from_right(int *line, int expected)
{
	int	max_seen;
	int	visible;
	int	j;

	max_seen = 0;
	visible = 0;
	j = 3;
	while (j >= 0)
	{
		if (line[j] > max_seen)
		{
			max_seen = line[j];
			visible++;
		}
		j--;
	}
	if (visible == expected)
		return (1);
	else
		return (0);
}
