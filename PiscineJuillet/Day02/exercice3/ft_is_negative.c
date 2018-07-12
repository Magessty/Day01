/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 08:03:27 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 03:08:11 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	int zero;

	zero = 0;
	if (n >= zero)
	{
		ft_putchar(80);
	}
	else
	{
		ft_putchar(78);
	}
}

int		main(void)
{
	ft_is_negative(6);
	return (0);
}
