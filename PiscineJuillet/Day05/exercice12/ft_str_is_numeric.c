/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 07:36:10 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 07:38:37 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 48 || str[count] > 57)
			return (0);
		count = count + 1;
	}
	return (1);
}
