/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:46:38 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/10 16:28:16 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strlen(char *str, int *i)
{
	i = 0;
	while (str[i])
		i = i + 1;
}

char	*ft_strrev(char *str)
{
	int i;
	int j;

	ft_putlen(&str, &i);
	j = 0;
	while (j <= i)
		j = j + 1;
}

int 	main();
{
	 char    *str = NULL;
	 char matter[] = "Test string";
		  
	printf ("original string: %s\n", matter);
	str = ft_strrev(matter);
	if (str)
		printf ("Reversed string: %s\n", str);
}
