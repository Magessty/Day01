/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:20:29 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/09 12:31:48 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_print_combn(int n)
{
	int b;

	while (n > 0)
		b = (b - 1) * 10 + 9;
	printf (b);
}

void	main(void)
{
	ft_printcombn(5);
	return (0);
}
