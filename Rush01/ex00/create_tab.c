/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:40:52 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/19 15:16:43 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* int		boite_legale(int box, int tab[4][4], int coord[2], int *rules);*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar((tab[i][j] + '0'));
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*void	find_empty_case(int *coord, int tab[4][4])
{
	int i;
	int j;
	int k;

	*coord = -1;
	i = 0;
	j = 0;
	k = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			if (tab[j - 1][i - 1] == 0)
			{
				coord[k] = j - 1;
				coord[k+1] = i - 1;
				return ;
			}
			i++;
		}
		j++;
	}
}

int		disposition(int tab[4][4], int *rules)
{
	int coord[2];
	int boite_testee;

	trouver_emplact_vide(&coord[0], tab);
	if (coord[0] == -1)
		return (1);
	boite_testee = 0;
	while (boite_testee < 4)
	{
		if (boite_legale(boite_testee, tab, coord, rules) == 1)
		{
			tab[coord[0]][coord[1]] = boite_testee;
			if (disposition(tab, rules == 1)
					return (1);
		}
		boite_testee++;
	}
	return (0);
}
*/

void	create_tab(int *rules)
{
	int	tableau[4][4];
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tableau[i][j] = 0;
			j++;
		}
		i++;
	}
	print_tab(tableau);
}
