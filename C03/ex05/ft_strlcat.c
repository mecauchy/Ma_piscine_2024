/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:53:57 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/03 17:56:43 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = ft_strlen(dest);
	j = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size < 1)
		return (len_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}

/*int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%d\n", ft_strlcat(av[1], av[2], atoi(av[3])));
	return (0);
}*/
