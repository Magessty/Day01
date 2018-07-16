/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 07:43:50 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 07:45:59 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 32 || str[count] == 127)
			return (0);
		count = count + 1;
	}
	return (1);
}
