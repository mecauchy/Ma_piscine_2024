/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:31:32 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/24 13:29:46 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*dest;
	char	*src;
	char	*res;
	unsigned int	size;

	src = "Hell";
	dest = malloc(sizeof(char) * strlen(src));
	size = 10;
	res = ft_strncpy(dest, src, size);
	printf("%s\n", res);
}*/
