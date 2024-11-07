/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:21:52 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/24 17:12:04 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha_numeric(char c)
{
	if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

int	ft_str_is_alpha(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((!(ft_str_is_alpha_numeric(str[i -1]))
				&& ft_str_is_alpha(str[i])))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int	main()
{
	char str[] = "sal tu vas ? 42ms rante-deux;te+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/
