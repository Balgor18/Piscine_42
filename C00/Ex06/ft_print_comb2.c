/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 13:42:20 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/10 11:31:02 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb2(int n)
{
	ft_putchar(' ');
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (++a < 100)
	{
		b = a;
		while (++b < 100)
		{
			print_comb2(a);
			print_comb2(b);
			if (a < 98)
			{
				ft_putchar(',');
			}
		}
	}
}
