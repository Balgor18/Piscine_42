/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:40:42 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/10 15:20:10 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (++a < 10)
	{
		b = a;
		while (++b < 10)
		{
			c = b;
			while (++c < 10)
			{
				if (a < b && b < c)
				{
					ft_putchar(a + '0');
					ft_putchar(b + '0');
					ft_putchar(c + '0');
					if (a < 7 && b <= 8 && c <= 9)
						write(1, ", ", 2);
				}
			}
		}
	}
}
