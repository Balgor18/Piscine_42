/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:55:19 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/21 18:36:16 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		total = total * (nb);
		nb--;
	}
	return (total);
}
