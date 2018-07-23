/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:04:09 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/23 05:25:00 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wordcount(char *str)
{
	int nbword;
	int count;

	nbword = 0;
	count = 0;
	while (str[count])
	{
		while (str[count] == '\n' || str[count] == '\t' || str[count] == ' ')
			count = count + 1;
		if (!str[count])
			return (nbword);
		while (str[count] != '\n' && str[count] != '\t' && str[count] != ' ' &&
				str[count])
			count = count + 1;
		nbword = nbword + 1;
	}
	return (nbword);
}

int		ft_charcount(char *str, int i)
{
	int		nbcharac;

	nbcharac = 0;
	while (str[i])
	{
		while (!(str[i] != '\n' && str[i] != '\t' && str[i] != ' ') &&
				str[i])
			i = i + 1;
		while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' &&
				str[i])
		{
			i = i + 1;
			nbcharac = nbcharac + 1;
		}
	}
	return (nbcharac);
}

int		ft_switchspaces(int *count2, char *str)
{
	while (str[*count2] == '\n' || str[*count2] == '\t' || str[*count2] == ' ')
		*count2 = *count2 + 1;
	if (str[*count2])
		return (42);
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		i2;
	int		count3;

	tab = (char**)malloc(sizeof(char*) * (ft_wordcount(str) + 1));
	i = 0;
	count3 = 0;
	i2 = 0;
	while (str[i2])
	{
		if (ft_switchspaces(&i2, str) != 0)
			tab[i] = (char*)malloc(sizeof(char) * (ft_charcount(str, i2) + 1));
		while (str[i2] != '\n' && str[i2] != '\t' && str[i2] != ' ' &&
				str[i2] != 0)
		{
			tab[i][count3] = str[i2];
			count3 = count3 + 1;
			i2 = i2 + 1;
		}
		count3 = 0;
		i = i + 1;
	}
	tab[i] = 0;
	return (tab);
}
