/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:20:43 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 17:53:47 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	else if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	else
	{
		i = 5;
		while (i <= 46350 && nb % i != 0)
			i = i + 2;
		if (nb % i == 0 && nb != i)
			return (0);
		else
			return (1);
	}
}
int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb = nb + 2;
	return (nb);
}
