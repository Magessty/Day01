/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 19:05:50 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 03:05:57 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char letter;

	letter = 97;
	while (letter <= 122)
	{
		ft_putchar(letter);
		letter = letter + 1;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
