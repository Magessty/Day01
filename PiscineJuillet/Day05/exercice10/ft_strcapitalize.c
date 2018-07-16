/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 06:31:33 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 07:24:45 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str, int *count)
{
	while ((str[*count] >= 48 && str[*count] <= 57) ||
			(str[*count] >= 65 && str[*count] <= 90) ||
			(str[*count] >= 97 && str[*count] <= 122))
	{
		if (str[*count] >= 65 && str[*count] <= 90)
			str[*count] = str[*count] + 32;
		*count = *count + 1;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] = str[count] - 32;
			count = count + 1;
			ft_strlowercase(str, &count);
		}
		if ((str[count] >= 65 && str[count] <= 90) ||
				(str[count] >= 48 && str[count] <= 57))
		{
			count = count + 1;
			ft_strlowercase(str, &count);
		}
		count = count + 1;
	}
	return (str);
}
