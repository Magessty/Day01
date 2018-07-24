/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:17:43 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/24 11:07:35 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verif_base(char *base)
{
	int count1;
	int count2;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	count1 = 0;
	while (base[count1])
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
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_power(nb, power - 1));
}

int		ft_convert(char *str, char *base, int nbbase)
{
	int count1;
	int count2;
	int power;
	int nbr;

	count1 = 0;
	count2 = 0;
	while (str[count2 + 1])
		count2 += 1;
	power = 0;
	nbr = 0;
	while (count2 >= 0)
	{
		count1 = 0;
		while (base[count1])
		{
			if (str[count2] == base[count1++])
			{
				nbr = nbr + ((count1) * (ft_power(nbbase, power++)));
				break ;
			}
		}
		count2 -= 1;
	}
	return (nbr);
}

void	ft_convert_number(int nbr, char *base, char *result, int zero)
{
	unsigned int	i;

	i = 0;
	while (base[i])
		i = i + 1;
	if (nbr >= i)
		ft_convert_number(nbr / i, base, result, zero + 1);
	result = (char*)malloc(sizeof(char) * (zero));
	result[zero] = base[nbr % i];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int count1;
	int nbbase_from;
	char *result;
	int convert;
	int zero;

	if (ft_verif_base(base_from) != 42)
		return (0);
	if (ft_verif_base(base_to) != 42)
		return (0);
	nbbase_from = 0;
	count1 = 0;
	while (base_from[nbbase_from])
		nbbase_from += 1;
	if (nbr[0] == '+' || nbr[0] == '-')
		count1 += 1;
	convert = ft_convert(nbr + count1, base_from, nbbase_from);
	ft_convert_number(convert, base_to, result, zero);
	return (result);
}

int main(int argc, char **argv)
{
	printf("%s",ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
