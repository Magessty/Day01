/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:55:42 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/20 09:55:17 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char					*ft_strdup(char *src)
{
	char		*str;
	int			count;

	count = 0;
	while (src[count])
	{
		count = count + 1;
	}
	str = (char*)malloc(sizeof(*str) * (count));
	count = 0;
	while (src[count])
	{
		str[count] = src[count];
		count = count + 1;
	}
	str[count] = '\0';
	return (str);
}

int						ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i = i + 1;
	return (i);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *param;
	int			count;

	count = 0;
	if (!(param = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac - 1))))
		return (0);
	while (count < ac)
	{
		param[count].size_param = ft_strlen(av[count]);
		param[count].str = av[count];
		param[count].copy = ft_strdup(av[count]);
		param[count].tab = ft_split_whitespaces(av[count]);
		count = count + 1;
	}
	param[count].str = 0;
	return (param);
}
