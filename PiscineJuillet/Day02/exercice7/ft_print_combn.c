/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:20:29 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/10 13:28:01 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;
	int nb1;

	nb1 = nb;
	i = 1;
	while (nb >= 10)
	{
		i = i * 10;
		nb = nb / 10;
	}
	ft_putchar(nb + 48);
	nb1 = nb1 - (nb * i);
	nb = nb1;
	if (nb > 0)
		ft_putnbr(nb);
}

int		ft_calculatemax(int n)
{
	int max;
	int i;
	int n1;
	int jsp;

	i = 1;
	n1 = n - 1;
	while (n > 0)
	{
		n = n - 1;
		i = i * 10;
	}
	n = n1;
	jsp = 9;
	while (*n >= 0)
	{
		max = (jsp - n) * i / 10 + max;
		n = n - 1;
		i = i / 10;
	}
	ft_putnbr(max);
}

int		ft_putzero(int n, int nb)
{
	int i;

	i = 1;
	while (n > 0)
	{
		i = i * 10;
		n = n - 1;
	}
	while (nb == nb % (i / 10))
	{
		ft_putchar(48);
		i = i / 10;
	}
}

int		ft_conditions(int *nb, int n)
{
	int i;
	int nb1;

	nb1 = *nb;
	i = 1;
	while (n > 2)
	{
		n = n - 1;
		i = i * 10;
	}
	while (nb1 % i == nb1 % (10 * i))
			i = i / 10;
	while (i >= 1)
	{
		while ((nb1 / i) % 10 <= (nb1 / (10 * i)) % 10)
			nb1 = nb1 + i;
		i = i / 10;
	}
	*nb = nb1;
}

void	ft_print_combn(int n)
{
	int nb;
	int max;

	nb = 1;
	ft_calculatemax(n);
	while (nb < max)
	{
		ft_conditions(&nb, n);
		ft_putzero(n, nb);
		ft_putnbr(nb);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		main(void)
{
	ft_print_combn(8);
	return (0);
}
