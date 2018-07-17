/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 00:10:34 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 06:59:19 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int n;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i = i + 1;
	}
	return (0);
}

void	ft_putstr(char **argv, int *argc)
{
	int count;
	int count2;

	count2 = 1;
	count = 0;
	while (count2 < *argc)
	{
		while (argv[count2][count])
		{
			ft_putchar(argv[count2][count]);
			count = count + 1;
		}
		count = 0;
		ft_putchar('\n');
		count2 = count2 + 1;
	}
}

int		main(int argc, char **argv)
{
	int count;

	count = 1;
	while (count < argc - 1)
	{
		if (ft_strcmp(argv[count], argv[count + 1]) > 0)
		{
			while (count > 0)
			{
				if (ft_strcmp(argv[count], argv[count + 1]) > 0)
				{
					argv[0] = argv[count];
					argv[count] = argv[count + 1];
					argv[count + 1] = argv[0];
				}
				count = count - 1;
			}
		}
		count = count + 1;
	}
	ft_putstr(argv, &argc);
	return (0);
}
