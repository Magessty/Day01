/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 22:53:08 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 03:06:42 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 122;
	while (letter >= 97)
	{
		ft_putchar(letter);
		letter = letter - 1;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
