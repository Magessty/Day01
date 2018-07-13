/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:59:03 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/13 16:07:13 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

int		main(int argc, char **argv)
{
	int n;

	n = 1;
	while (n != argc)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
		n = n + 1;
	}
	return (0);
}
