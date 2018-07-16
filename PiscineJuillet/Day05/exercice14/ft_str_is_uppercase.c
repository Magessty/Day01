/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 07:40:34 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 07:41:05 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 65 || str[count] > 90)
			return (0);
		count = count + 1;
	}
	return (1);
}
