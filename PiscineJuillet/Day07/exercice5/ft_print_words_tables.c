/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 00:23:21 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/23 18:06:53 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_table(char **tab)
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
		ft_putchar('\n');
		count1 = count1 + 1;
	}
}
