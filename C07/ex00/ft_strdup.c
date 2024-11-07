/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:17:45 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/07 12:19:29 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*res;

	i = 0;
	if (!src)
		return (NULL);
	res = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!res)
		return (NULL);
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char	*res;
	char	*src;

	src = "abc";
	res = ft_strdup(src);
	printf("%s\n", ft_strdup(res));
	free(res);
	return (0);
}*/
