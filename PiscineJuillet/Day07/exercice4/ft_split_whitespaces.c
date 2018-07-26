/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 18:19:33 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/24 18:13:39 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_charcount(char *str, int i)
{
	int len;

	len = 0;
	while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
	{
		len += 1;
		i += 1;
	}
	return (len);
}

int		ft_wordcount(char *str)
{
	int i1;
	int i2;

	i2 = 1;
	i1 = 0;
	while (*str)
	{
		if (*str == '\n' || *str == '\t' || *str == ' ')
		{
			str++;
			i2 = 1;
		}
		if (!(*str == '\n' || *str == '\t' || *str == ' ') && *str)
		{
			if (i2 == 1)
			{
				i1 += 1;
				i2 = 0;
			}
			str++;
		}
	}
	return (i1);
}

void	init(int *i1, int *i2)
{
	*i1 = 0;
	*i2 = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i1;
	int		i2;
	int		i3;

	init(&i1, &i2);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_wordcount(str) + 1))))
		return (0);
	while (str[i1])
	{
		while (str[i1] == '\n' || str[i1] == '\t' || str[i1] == ' ')
			i1 += 1;
		if (str[i1])
		{
			i3 = 0;
			if (!(tab[i2] = (char*)malloc(ft_charcount(str, i1) + 1)))
				return (0);
			while (str[i1] != '\n' && str[i1] != '\t' && str[i1] != ' ' &&
					str[i1])
				tab[i2][i3++] = str[i1++];
			tab[i2++][i3] = '\0';
		}
	}
	tab[i2] = 0;
	return (tab);
}
