/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:11:46 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/10 20:09:30 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	else if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0)
		while (i < nb);
