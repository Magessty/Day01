/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 07:33:02 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/20 09:59:13 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *tmp;

	size = max - min;
	if (size <= 0)
	{
		return (0);
	}
	*tmp = (int*)malloc(sizeof(int) * size);
	size = 0;
	while (min < max)
	{
		tmp[size] = min;
		size = size + 1;
		min = min + 1;
	}
	range[0] = tmp;
	return (size - 1);
}
