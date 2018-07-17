/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 22:33:39 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 00:25:50 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int count;

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
