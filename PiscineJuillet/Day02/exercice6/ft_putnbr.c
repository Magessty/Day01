/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 10:54:19 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/09 12:05:22 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putzero(int n)
{
	while (n > 0)
	{
		ft_putchar(48);
		n = n - 1;
	}
}

void	ft_putlimit(void)
{
	ft_putchar('-');
	ft_putchar(50);
	ft_putchar(49);
	ft_putchar(52);
	ft_putchar(55);
	ft_putchar(52);
	ft_putchar(56);
	ft_putchar(50);
	ft_putchar(54);
	ft_putchar(52);
	ft_putchar(56);
}

void	ft_divider(int nb, int zero, int i)
{
	while (nb >= 10)
	{
		if (nb % 10 == 0)
			zero = zero + 1;
		else
			zero = 0;
		i = i * 10;
		nb = nb / 10;
	}
}

void	ft_putnbr(int nb)
{
	int i;
	int nb1;
	int zero;

	if (nb == -2147483648)
		ft_putlimit();
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = (-1) * nb;
		}
		nb1 = nb;
		i = 1;
		zero = 0;
		ft_divider(nb, zero, i);
		ft_putchar(nb + 48);
		ft_putzero(zero);
		nb1 = nb1 - (nb * i);
		nb = nb1;
		if (nb > 0)
			ft_putnbr(nb);
	}
}

int		main(void)
{
	ft_putnbr(0);
	return (0);
}
