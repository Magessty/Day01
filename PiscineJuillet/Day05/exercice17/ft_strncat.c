/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 08:10:45 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 08:19:19 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int count;
	int lendest;

	lendest = 0;
	while (dest[lendest])
		lendest = lendest + 1;
	count = 0;
	while (src[count] && count < nb)
	{
		dest[lendest + count] = src[count];
		count = count + 1;
	}
	dest[lendest + count] = '\0';
	return (dest);
}
