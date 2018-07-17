/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 23:10:35 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 00:17:35 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tab;

	size = max - min;
	if (size <= 0)
	{
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * size);
	size = 0;
	while (min < max)
	{
		tab[size] = min;
		size = size + 1;
		min = min + 1;
	}
	return (tab);
}
