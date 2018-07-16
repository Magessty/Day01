/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 08:48:17 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 09:26:47 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int count;

	count = 0;
	while (src[count] && count < size - 1)
	{
		dest[count] = src[count];
		count = count + 1;
	}
	dest[count] = '\0';
	while (src[count])
		count = count + 1;
	return (count);
}
