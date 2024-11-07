/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:35:40 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/21 17:10:51 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size -1)
	{
		if (tab[i] > tab[j] && tab[j])
		{
			ft_swap(&tab[i], &tab[j]);
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}

/*int	main(void)
{
	int	tab[5] = {-136, 0, 9, -154, 7890};
	int	size;
	int	i;

	size = 5;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		i++;
	}	
}*/
