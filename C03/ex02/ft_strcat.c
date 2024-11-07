/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:59:03 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/26 13:59:13 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int ac, char **av)
{
	char	*dest;
	char	*src;
	char	*res;

	dest = av[1];
	src = av[2];
	if (ac == 3)
	{
		res = ft_strcat(dest, src);
		printf("%s\n", res);
	}
	return (0);
}*/
