2/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:51:35 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/12 02:17:59 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tableau(void)
{
	int tableau[8];

	tableau[0] = 0;
	tableau[1] = 0;
	tableau[2] = 0;
	tableau[3] = 0;
	tableau[4] = 0;
	tableau[5] = 0;
	tableau[6] = 0;
	tableau[7] = 0;
}

void	ft_colonne(int i)
{
	int
	tableau[i] = 1;

