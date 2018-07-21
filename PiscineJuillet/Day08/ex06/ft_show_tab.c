/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 01:54:48 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/20 05:56:35 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr2d(char **tab)
{
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;
	while (tab[count1])
	{
		while (tab[count1][count2])
		{
			ft_putchar(tab[count1][count2]);
			count2 = count2 + 1;
		}
		count2 = 0;
		count1 = count1 + 1;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;
	while (par[count1].str)
	{
		while (par[count1].copy[count2])
		{
			ft_putchar(par[count1].copy[count2]);
			count2 = count2 + 1;
		}
		ft_putchar('\n');
		ft_putnbr(par[count1].size_param);
		ft_putchar('\n');
		ft_putstr2d(par[count1].tab);
		ft_putchar('\n');
		count1 = count1 + 1;
	}
}
