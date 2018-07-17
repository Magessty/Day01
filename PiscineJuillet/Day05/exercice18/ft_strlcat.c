/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 08:27:09 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 16:10:31 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_lenght(int *lenght, int lensrc, int lendest, int size)
{
	if (lensrc > size)
		*lenght = lensrc + size;
	if (size <= lendest)
		*lenght = lensrc + size;
	if (size > lendest)
		*lenght = lensrc + lendest;
	if (size < 0)
		*lenght = lensrc + lendest;
	return (*lenght);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		count;
	int		lendest;
	int		lenght;

	lendest = 0;
	while (dest[lendest])
		lendest = lendest + 1;
	count = 0;
	while (src[count])
		count = count + 1;
	ft_lenght(&lenght, count, lendest, size);
	count = 0;
	if (size > lendest)
	{
		while (src[count] && count < size - lendest - 1)
		{
			dest[lendest + count] = src[count];
			count = count + 1;
		}
	}
	dest[lendest + count] = '\0';
	while (src[count])
		count = count + 1;
	return (lenght);
}
