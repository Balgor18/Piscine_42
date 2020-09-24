/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:21:22 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/23 18:28:10 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_max_len(char **strs, int size)
{
	int i;
	int j;
	int total;

	total = 0;
	i = 0;
	while (strs[i] && i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		total = total + j;
		i++;
	}
	return (total - 1);
}

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		maxchar;

	maxchar = ft_max_len(strs, size) + ((size - 1) * ft_strlen(sep));
	i = 0;
	str = malloc(sizeof(char) * maxchar);
	while (strs[i] && i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
