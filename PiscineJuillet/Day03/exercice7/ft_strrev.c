/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:46:38 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 11:16:08 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str, int *i)
{
	*i = 0;
	while (str[*i])
		*i = *i + 1;
	return (*i);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int memory;

	ft_strlen(str, &i);
	j = 0;
	i = i - 1;
	while (j < i)
	{
		memory = str[i];
		str[i] = str[j];
		str[j] = memory;
		i = i - 1;
		j = j + 1;
	}
	return (str);
}
