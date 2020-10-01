/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:32:50 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/15 15:33:19 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_str_is_printable(char str)
{
	if (str < 32 || str > 126)
		return (0);
	return (1);
}

void	str_to_hex(char str)
{
	int		mod;
	int		div;
	char	*base;

	base = "0123456789abcdef";
	mod = str % 16;
	div = str / 16;
	ft_putchar('\\');
	ft_putchar(base[div]);
	ft_putchar(base[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (!ft_str_is_printable(str[i]))
			str_to_hex(str[i]);
		else
			ft_putchar(str[i]);
	}
}
