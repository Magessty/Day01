/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 03:24:30 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/13 10:45:54 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_integer_table(int *tab, int *i, int *j, int *k)
{
	tab[0] = *i;
	tab[1] = *j;
	tab[2] = *k;
	return (42);
}

int		ft_antidote(int i, int j, int k)
{
	int count;
	int nb;
	int memory;
	int tab[3];

	ft_sort_integer_table(tab, &i, &j, &k);
	count = 0;
	while (count < 3)
	{
		if (tab[count + 1] > tab[count])
		{
			nb = count;
			while (nb != count && tab[nb + 1] < tab[nb])
			{
				memory = tab[nb];
				tab[nb + 1] = tab[nb];
				tab[nb] = memory;
				nb = nb + 1;
			}
		}
		count = count + 1;
	}
	return (tab[1]);
}
