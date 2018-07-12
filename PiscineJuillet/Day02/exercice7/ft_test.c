/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:02:10 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/11 13:29:43 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putzero(int n, int nb)
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

int		ft_conditions(int n, int *nb)
{
	int i;

	i = 1;
	while (n > 0)
	{
		n = n - 1;
		i = i * 10;
	}
	while (*nb % i == *nb % (10 * i))
		i = i / 10;
	while (i >= 1)
	{
		while ((*nb / i) % 10 <= (*nb / (10 * i)) % 10)
			*nb = *nb + 1;
		i = i / 10;
	}
	return (0);
}

int		ft_max(int n, int *max)
{
	int i;
	int neuf;
	int nmemory;

	nmemory = n;
	i = 1;
	neuf = 9;
	while (n > 0)
	{
		n = n - 1;
		i = i * 10;
	}
	n = nmemory - 1;
	while (n >= 0)
	{
		*max = (neuf - n) * i / 10 + *max;
		n = n - 1;
		i = i / 10;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int nb;
	int max;

	ft_max(n, &max);
	nb = 0;
	if (n == 1)
	{
		ft_putchar(48);
		ft_putchar(',');
		ft_putchar(' ');
	}
	nb = 1;
	while (nb <= max)
	{
		ft_conditions(n, &nb);
		ft_putzero(n, nb);
		ft_putnbr(nb);
		if (nb != max)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		nb = nb + 1;
	}
}

int		main(void)
{
	ft_print_combn(3);
	return (0);
}
