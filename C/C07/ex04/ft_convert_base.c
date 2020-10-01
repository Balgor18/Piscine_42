/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:17:53 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/25 12:59:09 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_putnbr(long *nb, long base, char *basechar)
{
	char	total;
	int		mod;

	mod = nb[0] % base;
	total = basechar[mod];
	nb[0] = nb[0] / base;
	return (total);
}

int		ft_malloc_size(long nb, int size_base)
{
	int		i;

	i = 0;
	if (nb / size_base <= 0)
		i++;
	while ((nb = nb / size_base) != 0)
		i++;
	return (i);
}

void	rev_tab(char *tab)
{
	char	temp;
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (tab[j + 1] != '\0')
	{
		j++;
	}
	if (tab[0] == '-')
		i++;
	while (j >= i)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j--;
		i++;
	}
}

char	*ft_get_all_char(long nb, int size_base, char *basechar)
{
	int		i;
	char	*total;
	int		malloc_size;

	malloc_size = ft_malloc_size(nb, size_base);
	i = 0;
	if (!(total = malloc(sizeof(char) * malloc_size)))
		return (0);
	if (nb < 0)
	{
		total[i] = '-';
		nb *= -1;
		i++;
	}
	while (malloc_size >= i)
		total[i++] = ft_putnbr(&nb, size_base, basechar);
	total[i] = '\0';
	rev_tab(total);
	return (total);
}
