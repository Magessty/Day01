/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 11:28:32 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/13 00:32:57 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	sign = 1;
	i = 0;
	nb = 0;
	while (str[i] < 33 && str[i])
		i = i + 1;
	if (str[i] == '-')
	{
		sign = -1;
		i = i + 1;
	}
	if (str[i] == '+')
		i = i + 1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i = i + 1;
	}
	return (sign * nb);
}

int		main()
{
	printf("%d\n", ft_atoi("-22424"));
	printf("%d\n", ft_atoi("2462564"));
	printf("%d\n", ft_atoi("  732 525"));
	printf("%d\n", ft_atoi("gjfgdb51HBF"));
	printf("%d\n", ft_atoi("\n 23 "));
	printf("%d\n", ft_atoi("34165461564"));
	printf("%d\n", ft_atoi("2-424"));
}
