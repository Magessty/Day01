/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintcombn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 23:22:14 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 03:44:04 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puttab(int *tab, int n)
{
	int i;
	int condition;

	i = 1;
	condition = 42;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			condition = 0;
		i = i + 1;
	}
	if (condition)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + 48);
			i = i + 1;
		}
		if (tab[0] < 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_n_one(int *i, int *n)
{
	if (*n == 1)
		while (*i < 10)
		{
			ft_putchar(*i + 48);
			if (*i != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			*i = *i + 1;
		}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	ft_n_one(&i, &n);
	while (i < n)
	{
		tab[i] = 0;
		i = i + 1;
	}
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_puttab(tab, n);
		tab[n - 1]++;
		i = n;
		while (i != 0 && n > 1)
		{
			i = i - 1;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}

int		main(void)
{
	ft_print_combn(9);
	return (0);
}
