/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:28:24 by lantona           #+#    #+#             */
/*   Updated: 2024/10/06 16:27:38 by lantona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	ft_line_count(char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep || str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

int	ft_size_word(char *str, int index, char sep)
{
	int	i;
	int	word_nbr;
	int	word_size;

	i = 0;
	word_nbr = 1;
	word_size = 0;
	while (str[i])
	{
		if (str[i - 1] == sep)
			word_nbr++;
		if (word_nbr == index)
		{
			while (str[i] != sep && str[i] != '\0')
			{
				word_size++;
				i++;
			}
			break ;
		}
		i++;
	}
	return (word_size);
}

char	**ft_allocate(char *str, char **dest, char sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (dest[i])
	{
		j = 0;
		while (str[k] != sep && str[k] != '\0')
		{
			dest[i][j] = str[k];
			j++;
			k++;
		}
		dest[i][j] = '\0';
		k++;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

char	**ft_split(char *str, char sep)
{
	char	**dest;
	int		i;
	int		line_count;

	line_count = ft_line_count(str, sep);
	i = 0;
	dest = malloc ((line_count + 1) * sizeof(char *));
	while (i < line_count)
	{
		dest[i] = malloc((ft_size_word(str, i + 1, sep) + 1) * sizeof(char));
		i++;
	}
	return (ft_allocate(str, dest, sep));
}
/*
#include <stdio.h>
int	main(void)
{
	char	**a;
	int	i;
	int	j;

	a = ft_split("qwe\ncdsadccddad\nfwfew", '\n');
	i = 0;
	while(a[i])
	{
		j = 0;
		while(a[i][j])
		{
			printf("%d, %d : %c\n", i, j, a[i][j]);
			j++;
		}
		i++;
	}
	free(a);
	return (0);
}*/
