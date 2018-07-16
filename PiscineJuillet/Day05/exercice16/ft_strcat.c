/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 07:53:03 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 08:10:20 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int lendest;

	lendest = 0;
	while (dest[lendest])
		lendest = lendest + 1;
	count = 0;
	while (src[count])
	{
		dest[lendest + count] = src[count];
		count = count + 1;
	}
	dest[lendest + count] = '\0';
	return (dest);
}
