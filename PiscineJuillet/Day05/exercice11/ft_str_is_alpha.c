/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 07:25:59 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 07:34:54 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 65 || str[count] > 122 ||
				(str[count] > 90 && str[count] < 97))
			return (0);
		count = count + 1;
	}
	return (1);
}
