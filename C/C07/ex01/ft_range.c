/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:16:23 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/23 14:45:17 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int			*tab;
	long int	i;
	long int	minb;
	long int	maxb;
	long int	size;

	minb = min;
	maxb = max;
	i = 0;
	size = maxb - minb;
	if (minb >= maxb)
		return (0);
	if (!(tab = malloc(sizeof(int) * size)))
		return (0);
	while (minb < maxb)
	{
		tab[i] = minb;
		minb++;
		i++;
	}
	return (tab);
}
