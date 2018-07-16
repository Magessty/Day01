/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 03:53:52 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 05:47:42 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int count;
	int count2;

	count = 0;
	while (str[count])
	{
		count2 = 0;
		while (to_find[count2] == str[count + count2])
		{
			if (to_find[count2 + 1] == '\0')
				return (str + count);
			count2 = count2 + 1;
		}
		count = count + 1;
	}
	return (0);
}
