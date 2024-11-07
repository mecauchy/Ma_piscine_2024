/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:06:20 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/24 13:32:11 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	i;
	char	*str;

	str = "";
	i = ft_str_is_lowercase(str);
	printf("%d\n", i);
}*/
