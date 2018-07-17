/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 07:33:02 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 16:40:39 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;

	size = max - min;
	if (size <= 0)
	{
		return (0);
	}
	*range = (int*)malloc(sizeof(int*) * size);
	size = 0;
	while (min < max)
	{
		*range = min;
		size = size + 1;
		min = min + 1;
	}
	return (size);
