/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 18:29:27 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/14 20:37:16 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	--size;
	i = -1;
	while (++i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
	}
	return ;
}
