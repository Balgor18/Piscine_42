/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:33:16 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/10 08:17:09 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_while(int nb, int nb_use,int last)
{
	int a = -1;
	int cha = -1;
	while (++a < 10)
	{
		if (nb_use < nb)
			ft_while(nb,++nb_use,a);
		while (++cha < nb){
			ft_putchar(last + '0');
			ft_putchar(a + '0');
		}
		write(1,", ", 2);
	}
}
void	ft_print_combn(int n)
{
		ft_while(n,1,0);
}

int main()
{
	ft_print_combn(3);
}
