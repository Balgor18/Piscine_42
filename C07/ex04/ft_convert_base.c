/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:17:53 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/24 14:53:15 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(long nb, int base, char *basechar)
{
	char total;
	if (total = malloc(sizeof(char) * ))
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < base)
		ft_putchar(basechar[nb]);
	else
	{
		ft_putnbr(nb / base, base, basechar);
		ft_putnbr(nb % base, base, basechar);
	}
}
