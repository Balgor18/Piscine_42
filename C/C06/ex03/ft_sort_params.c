/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:20:59 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/21 17:29:50 by fcatinau         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

int		main(int a, char **c)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < a)
	{
		j = 0;
		while (++j < a)
			if (ft_strcmp(c[i], c[j]) < 0)
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
	}
	i = 1;
	while (i < a)
	{
		ft_putstr(c[i++]);
		ft_putchar('\n');
	}
}
