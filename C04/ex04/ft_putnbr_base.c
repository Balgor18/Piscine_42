/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 09:06:24 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/18 10:46:17 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int base, char *basechar)
{
	if (nb < base)
		ft_putchar(basechar[nb]);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1), base, basechar);
	}
	else
	{
		ft_putnbr(nb / base, base, basechar);
		ft_putnbr(nb % base, base, basechar);
	}
}

int		ft_no_one_car_in_str(char spec, char *base)
{
	int i;
	int caracfind;

	caracfind = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == spec)
			caracfind++;
		else if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	if (caracfind > 1)
		return (1);
	return (0);
}

int		ft_check_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (ft_no_one_car_in_str(base[i], base))
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	if (ft_check_base(base))
		return ;
	ft_putnbr(nbr, i, base);
}
