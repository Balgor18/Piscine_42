/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:43:18 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/19 15:24:00 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	create_tab(int *tab);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	correct_arg(char *str, int *tab, int *nb)
{
	int i;

	i = 0;
	if (ft_strlen(str) != 31)
		return ;
	while (str[i] && *nb < 16)
	{
		if ((str[i] >= '1' && str[i] <= '4') && (str[i + 1] == ' '
					|| str[i + 1] == '\0'))
		{
			tab[*nb] = ((str[i] - '0'));
			*nb += 1;
			i++;
		}
		if (str[i] == ' ')
			i++;
		else if (str[i] != 0)
			return ;
	}
}

int		main(int argc, char **argv)
{
	int tab[16];
	int nb;
	int i;

	i = 0;
	nb = 0;
	if (argc == 2)
	{
		correct_arg(argv[1], &tab[0], &nb);
		if (nb == 16)
			create_tab(tab);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
