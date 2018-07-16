/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 06:25:03 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 06:28:30 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 65 && str[count] <= 90)
			str[count] = str[count] + 32;
		count = count + 1;
	}
	return (str);
}
