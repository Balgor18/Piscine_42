/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 09:32:34 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/10 12:37:53 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_value(int tab[], int n)
{
	int a = -1;

	while (++a < n){
		// ne pas oublie aue si sa marche il faut que je mette une var qui s'incrementede 1 en 1 pour ensuite soustraire et afficher dans le while
		ft_putchar(*(tab[n-1][a]));
		ft_putchar(*(tab[n][a]));
	}
}

void ft_while(int nb, int nbuse)
{
	int a = -1;
	int *tab[5][9];
	while ( ++a < 10)
	{
		tab[nbuse][a]=&a;
		if (nbuse < nb)
			ft_while(nb, ++nbuse);
		else
			ft_print_value(tab[nbuse],nb);
	}
}

void ft_print_combn(int n)
{
	ft_while(n,0);	
}

int main()
{
	ft_print_combn(3);
}
