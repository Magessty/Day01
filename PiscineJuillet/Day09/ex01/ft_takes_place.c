/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:55:37 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 19:15:58 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	write (1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour < 11 && hour != 0)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 24 || hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
}
