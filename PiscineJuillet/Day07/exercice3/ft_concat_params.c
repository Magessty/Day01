/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:03:27 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 17:48:47 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lenght(int argc, char **argv)
{
	int count;
	int count2;
	int len;

	count = 1;
	count2 = 0;
	len = 0;
	while (count < argc - 1)
	{
		while (argv[count][count2])
			count2 = count2 + 1;
		len = len + count2 - 1;
		count2 = 0;
		count = count + 1;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int count;
	int count2;
	int len;
	char *str;
	int count3;

	len = ft_lenght(argc, argv);
	str = (char*)malloc(sizeof(*str) * (len));
	count = 1;
	count2 = 0;
	count3 = 0;
	while (count < argc)
	{
		while (argv[count][count2])
		{
			str[count3] = argv[count][count2];
			count2 = count2 + 1;
			count3 = count3 + 1;
		}
		count2 = 0;
		count = count + 1;
		if (count < argc)
			str[count3++] = '\n';
	}
	return (str);
}
