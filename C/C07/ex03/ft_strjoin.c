/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:21:22 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/28 14:44:15 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_join(int size, char **strs, char *sep, char *tab)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			tab[k] = strs[j][i];
			i++;
			k++;
		}
		i = 0;
		while (sep[i] && j + 1 < size)
		{
			tab[k] = sep[i];
			k++;
			i++;
		}
		j++;
	}
	tab[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		mem;
	char	*tab;

	mem = 0;
	i = 0;
	while (i < size)
	{
		mem = mem + ft_strlen(strs[i]) + ft_strlen(sep) + 1;
		i++;
	}
	if (!(tab = malloc(sizeof(char) * mem)))
		return (NULL);
	if (size == 0)
		return (tab);
	ft_join(size, strs, sep, tab);
	return (tab);
}
