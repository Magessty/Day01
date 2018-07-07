/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 08:24:59 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/06 16:13:05 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int (a);
	int (b);
	int (c);

	a = -1;
	while (a++ < 6)
	{
		b = a;
		while (b++ < 8)
		{
			c = b + 1;
			while (c++ < 10)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 47);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar(55);
	ft_putchar(56);
	ft_putchar(57);
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
