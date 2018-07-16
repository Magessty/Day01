/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 03:30:21 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 03:52:39 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int count;

	count = 0;
	while (count < n && src[count])
	{
		dest[count] = src[count];
		count = count + 1;
	}
	while (dest[count])
	{
		dest[count] = '\0';
		count = count + 1;
	}
	return (dest);
}
