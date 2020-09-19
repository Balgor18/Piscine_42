/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:13:17 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/17 12:23:59 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int total;
	int nbmult;

	nbmult = nb;
	if (power == 0)
		return (1);
	if (power > 1)
	{
		while (power > 1)
		{
			nb = nb * nbmult;
			power--;
		}
		return (nb);
	}
	return (0);
}
