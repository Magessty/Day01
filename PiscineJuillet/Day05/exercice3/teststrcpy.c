/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 01:30:28 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/16 02:46:04 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		main()
{
	char str1[] = "La pop";

	printf("%s", str1);
	strcpy(str1, "Salut ca va ?");
	printf("%s", str1);
	return (0);
}
