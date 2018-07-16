/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 06:02:03 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 06:24:04 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] = str[count] - 32;
		count = count + 1;
	}
	return (str);
}
