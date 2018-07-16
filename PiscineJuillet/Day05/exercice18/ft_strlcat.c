/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 08:27:09 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 08:45:51 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int count;
	int lendest;

	lendest = 0;
	while (dest[lendest])
		lendest = lendest + 1;
	count = 0;
	while (src[count] && count < size - lendest)
	{
		dest[lendest + count] = src[count];
		count = count + 1;
	}
	dest[lendest + count] = '\0';
	return (lendest + count);
}
