/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:31:22 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/07 18:20:03 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	strs_len(char **strs, char *sep)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	len = 0;
	while (strs[i])
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	while (j < i - 1)
	{
		len += ft_strlen(sep);
		j++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	i = 0;
	if (size <= 0)
	{
		res = (char *)malloc(sizeof(char) * 1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = (char *)malloc(sizeof(char) * strs_len(strs, sep) + 1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	while (i < size && strs[i])
	{
		res = ft_strcat(res, strs[i]);
		if (i < size - 1 && strs[i + 1])
			res = ft_strcat(res, sep);
		i++;
	}
	return (res);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	char	*res;

	res = ft_strjoin(4, av, "-");
	printf("%s\n", res);
	free(res);
	return (0);
}*/
