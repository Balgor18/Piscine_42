/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:53:59 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/21 12:55:27 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int i;
	unsigned int nbb;
	nbb = nb;
	i = 1;
	while (nbb > i * i)// && i < 46341)
		i++;
	if (nbb == i * i)
		return (i);
	return (0);
}

int		main(int ac, char **av)
{
	printf("%d\n",ft_sqrt(atoi(av[1])));
}