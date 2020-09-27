/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:04:35 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/26 18:11:50 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int		i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

int		ft_strlen(char *c)
{
	int		i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}
/*
int		ft_str_is_alpha(char str)
{
	if ((str > 'Z' || str < 'A') && (str > 'z' || str < 'a'))
		return (0);
	return (1);
}*/
