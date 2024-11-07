/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:23:39 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/09/26 13:58:20 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	int	a;

	s1 = "abtycdef";
	s2 = "qabtycdef";
	a = ft_strcmp(s1, s2);
	printf("ft :: %d\n", a);
	return (0);
}*/
