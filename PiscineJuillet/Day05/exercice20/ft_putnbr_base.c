/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:58:28 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 07:23:25 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int basetransit;
	int count;

	count = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * (-1);
	}
	if (base[1] != '\0')
	{
		while (nbr > 0)
		{
			basetransit = basetransit + (nbr % *base) * ft_power(10, count);
			nbr = nbr / *base;
			count = count + 1;
		}
	}
}
