/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:45:21 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/10 16:57:48 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (n == 0)
		return (1);
	else if (nb > 0 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
