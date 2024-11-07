/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:56:32 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/10/03 17:55:39 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	*res;
	char	*str;
	char	*find;
	
	str = "bonjour ca vas";
	find = "ca";
	res = ft_strstr(str, find);
	printf("fc : %s\n", res);
	printf("man : %s\n", strstr(str, find));
}*/
