/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 04:19:49 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/21 04:40:24 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_priority(char *str)
{
	int count;
	int priority;
	int *tab;

	count = 0;
	priority = 1;
	while (str[count])
	{
		if (str[count] == '(')
		{
			priority += 1;
			tab[count] = -priority;
		}
		else if (str[count] == ')')
		{
			priority -= 1;
			tab[count] = -priority;
		}
		else if (str[count] == '*' || str[count] == '/' || str[count] == '%')
			tab[count] = priority + 1;
		else if (str[count] == '+' || str[count] == '-')
			tab[count] = priority;
		else
			tab[count] = 0;
		count += 1;
	}
}
