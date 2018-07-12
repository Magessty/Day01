/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:30:16 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 10:19:43 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcommas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_putnbr(int n)
{
	int c1;
	int c2;

	if (n < 10)
	{
		ft_putchar(48);
		ft_putchar(n + 48);
	}
	else
	{
		c1 = n / 10;
		c2 = n % 10;
		ft_putchar(c1 + 48);
		ft_putchar(c2 + 48);
	}
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = -1;
	while (n1 < 99)
	{
		n1 = n1 + 1;
		while (n2 <= n1)
			n2 = n2 + 1;
		while (n2 < 100)
		{
			ft_putnbr(n1);
			ft_putchar(' ');
			ft_putnbr(n2);
			if (n1 != 98)
				ft_putcommas();
			n2 = n2 + 1;
		}
		n2 = 0;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
