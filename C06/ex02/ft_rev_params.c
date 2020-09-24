/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:22:38 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/21 17:26:20 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

int		main(int a, char **v)
{
	a--;
	while (a != 0)
	{
		ft_putstr(v[a--]);
		ft_putchar('\n');
	}
}
