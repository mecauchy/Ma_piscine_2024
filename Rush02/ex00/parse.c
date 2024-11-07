/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:37:58 by lantona           #+#    #+#             */
/*   Updated: 2024/10/06 21:04:32 by lantona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*ft_read(char *filename)
{
	int	fd;
	int	read_char;
	int	count;
	char	*buffer;

	buffer = malloc(0);
	read_char = -1;
	count = 1;
	fd = open(filename, O_RDONLY);
	while (read_char != 0)
	{
		free(buffer);
		buffer = malloc(sizeof(char) * count);
		read_char = read(fd, buffer, 1);
		if (buffer[count] == '+' || buffer[count] == '-')
			buffer[count] = '\0';
		else if (buffer[count] == ' ')
			buffer[count] = '\0';
		else if (buffer[count] == '\n' && (buffer[count - 1] == '\n') || (count == 1))
			buffer[count] = '\0';
		else
			count++;
	}
	return (buffer);
}

void	*parse(char *ret, char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	ret = ft_read(fd, filename);
	close(fd);
}

char	*ft_get_number(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign++;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = str[i];
		i++;
	}
	if (sign % 2 == 1)
	{
		write(2, "Erreur\n", 6);
		return ("-");
	}
	return (result);
}
