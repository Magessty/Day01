/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 07:39:05 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 07:41:20 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 97 || str[count] > 122)
			return (0);
		count = count + 1;
	}
	return (1);
}
