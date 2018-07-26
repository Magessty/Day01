/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:17:43 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/25 17:56:38 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_verif_base(char *base)
{
	int				count1;
	int				count2;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	count1 = 0;
	while (base[count1 + 1])
	{
		count2 = count1 + 1;
		while (base[count2])
		{
			if (base[count1] == base[count2])
				return (0);
			count2 += 1;
		}
		if (base[count1] < 33 || base[count1] == '+' || base[count1] == '-' ||
				base[count1] == 127)
			return (0);
		count1 += 1;
	}
	return (42);
}

int		ft_power(int nb, int power)
{
	int				nbinit;

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
		return (nb);
	}
}

int		ft_convert(char *str, char *base, int nbbase)
{
	int				count1;
	int				count2;
	int				pow;
	int				nbr;

	count1 = 0;
	count2 = 0;
	while (str[count2 + 1])
		count2 += 1;
	pow = 0;
	nbr = 0;
	while (count2 >= 0)
	{
		count1 = 0;
		while (base[count1++])
		{
			if (str[count2] == base[count1 - 1])
			{
				nbr = nbr + ((count1 - 1) * (ft_power(nbbase, pow++)));
				break ;
			}
		}
		count2 -= 1;
	}
	return (nbr);
}

void	ft_convert_number(int nbr, char *base, char *result, int count2)
{
	unsigned int	i;
	char			*result2;

	i = 0;
	while (base[i])
		i = i + 1;
	count2 += 1;
	if (result[0] != 0)
		result2 = result;
	if (result[0] != 0)
		free(result);
	result = malloc(sizeof(char) * (count2 + 1));
	if (result2[0] != 0)
		result = result2;
	if (result2[0] != 0)
		free(result2);
	result2 = malloc(sizeof(char) * (count2 + 1));
	result[count2] = base[nbr % i];
	if (nbr >= i)
		ft_convert_number(nbr / i, base, result, count2);
	printf("%c", base[nbr % i]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				count1;
	int				nbbase_from;
	char			*result;
	int				convert;
	int				count;

	count = 0;
	if (ft_verif_base(base_from) != 42)
		return (0);
	if (ft_verif_base(base_to) != 42)
		return (0);
	nbbase_from = 0;
	count1 = 0;
	while (base_from[nbbase_from])
		nbbase_from += 1;
	if (nbr[0] == '-')
		count1 += 1;
	convert = ft_convert(nbr + count1, base_from, nbbase_from);
	ft_convert_number(convert, base_to, result, count1);
	printf("r = %s\n", result);
	result[count + count1 + 1] = 0;
	if (nbr[0] == '-')
		result[0] = '-';
	return (result);
}
