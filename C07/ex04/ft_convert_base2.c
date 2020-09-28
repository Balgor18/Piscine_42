/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:17:55 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/28 14:54:23 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_get_all_char(long nb, int size_base, char *basechar);

int		ft_checknum_in_base(char num, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == num)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_check_base(char *base, int size_base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' ||
				(base[i] > 8 && base[i] < 14) || base[i] == ' ')
			return (1);
		j = i + 1;
		while (j < size_base)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == base[j])
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int		ft_atoi(char *c, int len_base, char *base)
{
	int i;
	int sign;
	int total;

	total = 0;
	i = 0;
	sign = 1;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == ' ')
		i++;
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign *= -1;
		i++;
	}
	while (c[i] && ft_checknum_in_base(c[i], base) >= 0)
	{
		total = total * len_base;
		total = total + (ft_checknum_in_base(c[i], base));
		i++;
	}
	return (total * sign);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (base[i])
		i++;
	return (ft_atoi(str, i, base));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	dec;
	int		lento;
	int		lenfrom;

	lento = 0;
	lenfrom = 0;
	while (base_to[lento])
		lento++;
	while (base_from[lenfrom])
		lenfrom++;
	if (ft_check_base(base_from, lenfrom) || ft_check_base(base_to, lento))
		return (0);
	dec = ft_atoi_base(nbr, base_from);
	return (ft_get_all_char(dec, lento, base_to));
}
