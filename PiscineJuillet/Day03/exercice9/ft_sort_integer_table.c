/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 23:24:11 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/13 00:04:21 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int nb;
	int memory;

	i = 0;
	while (i < size)
	{
		i = i + 1;
		if (tab[i] < tab[i - 1])
		{
			nb = i;
			while (nb != 0 && tab[nb] < tab[nb - 1])
			{
				memory = tab[nb];
				tab[nb] = tab[nb - 1];
				tab[nb - 1] = memory;
				nb = nb - 1;
			}
		}
	}
}
