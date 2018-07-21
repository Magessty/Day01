/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_rond.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:08:13 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/21 14:15:31 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	fonction permettant de definir mathematiquement si la figure representee 
//	est un rond inverse:
//	Comment proceder ?
//	
//	1ere etape :
//
//	il faut d'abord calculer les diametres les plus simples (hauteur & largeur)
//	et verifier qu'il sont de meme longueur.
//
int		ft_verif_hauteur_largeur(char **tab)
{
	int count_largeur;
	int count_hauteur;

	count_largeur = 0;
	count_hauteur = 0;
	while (tab[count_hauteur])
	{
		count_hauteur += 1;
	}
	
