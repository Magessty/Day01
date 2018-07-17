/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:04:09 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/17 21:06:41 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int count;
	int nbword;
	int count2;

	count = 0;
	nbword = 0;
	while (str[count])
	{
		while (str[count] == '\n' || str[count] == '\t' || str[count] == ' ' ||
				str[count])
			count = count + 1;
		while (str[count] != '\n' || str[count] != '\t' || str[count] != ' ' ||
				str[count])
			count = count + 1;
		if (str[count - 1] != '\n' || str[count - 1] != '\t' ||
				str[count - 1] != ' ')
			nbword = nbword + 1;
	}
	if nbword = 0
		return (0);
	tab = (char**)malloc(sizeof(**tab) * nbword);
	count = 0;
	nbword = 0;
	count2 = 0;
	while (str[count])
	{
		while (str[count] == '\n' || str[count] == '\t' || str[count] == ' ' ||
				str[count])
			count = count + 1;
		while (str[count] != '\n' || str[count] != '\t' || str[count] != ' ' ||
				str[count])
		{
			tab[nbword][count2] = str[count];
			count = count + 1;
			count2 = count2 + 1;
		}
		tab[nbword][count2] = 0;
		count2 = 0;
		nbword = nbword + 1;
	}
	return (tab);
}
