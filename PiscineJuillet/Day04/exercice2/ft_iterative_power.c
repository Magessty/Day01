/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:58:33 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/10 17:20:24 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nbinit;

	nbinit = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			nb = nb * nbinit;
			power = power - 1;
		}
		if (nb > 2147483647 || nb < -2147483648)
			return (0);
		else
			return (nb);
	}
}