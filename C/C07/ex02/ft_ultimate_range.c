/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:34:23 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/28 14:41:31 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long int size;
	long int i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range[0] = 0;
		return (0);
	}
	if (!(range[0] = malloc(sizeof(int) * size)))
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
