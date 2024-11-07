/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:47:16 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/24 16:13:38 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
