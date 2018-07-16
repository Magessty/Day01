/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 00:10:34 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 03:30:57 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count = count + 1;
	}
	dest[count] = src[count];
	return (0);
}

int		main(int argc, char **argv)
{
	int count;
	char memory[50];
	int count2;

	count = 1;
	while (count < argc)
	{
		if (argv[count + 1][0] < argv[count][0] && argv[count + 1])
		{
			count2 = count;
			while (argv[count2 + 1][0] < argv[count2][0] && argv[count2 + 1])
			{
				ft_strcpy(memory, argv[count2 + 1]);
				ft_strcpy(argv[count2 + 1], argv[count2]);
				ft_strcpy(argv[count2], memory);
				count2 = count2 + 1;
			}
		}
		count = count + 1;
	}
	return (0);
}
