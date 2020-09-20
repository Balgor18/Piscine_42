/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:43:18 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/20 14:18:17 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	create_tab(int *tab);
int		all_verif(int tab[16]);
void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
/*************************************************************/
/*int		corner_tab(int *rules,int line,int col)
{
	// voir pour refaire une verif mais normalement pas besoin car fais avant
	if (rules[line] == 1)
}*/

/*************************************************************/
void	create_tab(int *rules)
{
	int	tableau[4][4];
	int i;
	int j;
	
	i = 0;
	printf("rules %d\n",*rules);
	while (i < 4)
	{
		j = 0;
		//printf("rules[i] == %d && rules[i max] == %d\n",rules[i],rules[i + 4]);
		while (j < 4)
		{
			//printf("rules[i + 7] == %d && rules[i max] == %d\n",rules[j + 7],rules[j + 11]);
			if ((i == 0 || i == 3) && (j == 0 || j == 3))
			{
				printf("Cas angle\n");
				//tableau[i][j] = corner_tab(rules, i, j);
			}
			else
			{
				printf("Cas centre bord\n");
				// voir pour le cas centre centre 
				tableau[i][j] = 0;
			}
			j++;
		}
		i++;
	}
	print_tab(tableau);
}

int		main()//(int argc, char **argv)
{
	int tab[16] = {4,3,2,1,1,2,3,4,4,3,2,1,1,2,3,4}; //Valeur d'entre passe outre la verif
	int nb;
	int i;

	i = 0;
	nb = 0;
	if (all_verif(tab))
		create_tab(tab);
	else
		write(1, "Error\n", 6);
	/*if (argc == 2)
	{
		if (nb == 16)
			create_tab(tab);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);*/
	return (0);
}
