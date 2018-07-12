/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:20:29 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/11 23:36:16 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	putnbr(int nb)
{
	if (nb > 10)
		putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int		calculatemax(int n, int *max)
{
	int i;
	int neuf;
	int nmemory;

	nmemory = n;
	i = 1;
	neuf = 9;
	while (n > 0)
	{
		i = i * 10;
		n = n - 1;
	}
	n = nmemory - 1;
	while (n >= 0)
	{
		*max = (neuf - n) * i / 10 + *max;
		i = i / 10;
		n = n - 1;
	}
	return (0);
}

int		conditions1(int n, int *max)
{
	if (n = 9)
	{
		while ((*max / 100000000) % 10 > (*max / 10000000) % 10)
			*max = *max - 100000000;
	}
	if (n >= 8)
	{
		while ((*max / 10000000) % 10 > (*max / 1000000) % 10)
			*max = *max - 10000000;
	}
	if (n >= 7)
	{
		while ((*max / 1000000) % 10 > (*max / 100000) % 10)
			*max = *max - 1000000;
	}
	if (n >= 6)
	{
		while ((*max / 100000) % 10 > (*max / 10000) % 10)
			*max = *max - 100000;
	}
	conditions2(n, *max);
}

int		conditions2(int n, int *max)
{
	if (n >= 5)
	{
		while ((*max / 10000) % 10 > (*max / 1000) % 10)
			*max = *max - 10000;
	}
	if (n >= 4)
	{
		while ((*max / 1000) % 10 > (*max / 100) % 10)
			*max = *max - 1000;
	}
	if (n >= 3)
	{
		while ((*max / 100) % 10 > (*max / 10) % 10)
			*max = *max - 100;
	}
	if (n >= 2)
	{
		while ((*max / 10) % 10 > *max % 10)
			*max = *max - 10;
	}
	if (n >= 1) 
	{
		while (*max % 10 > 0)
			*max = *max - 1;
	}
}

void	ft_print_combn(int n)
{
	int max;

	calculatemax(n, &max);
	if (max 












		// il faut :
// (max / 10 ^ 9) < (max / 10 ^ 8) % 10 < (max / 10 ^ 7) % 10 < (max / 10 ^ 6)
// % 10 < (max / 10 ^ 5) % 10 < (max / 10 ^ 4) % 10 < (max / 10 ^ 3) % 10
// < (max / 10 ^ 2) % 10 < (max / 10) % 10

int		main(void)
{
	ft_print_combn(8);
	return (0);
}
