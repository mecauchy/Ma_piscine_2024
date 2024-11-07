/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:08:35 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/24 13:50:21 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_in_base(unsigned char c)
{
	ft_putchar('\\');
	if (c / 16 < 10)
		ft_putchar(c / 16 + 48);
	else
		ft_putchar(c / 16 + 87);
	if (c % 16 < 10)
		ft_putchar(c % 16 + 48);
	else
		ft_putchar(c % 16 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
			ft_is_in_base(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	*str;

	str = "Coucou\ntu\xff vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
