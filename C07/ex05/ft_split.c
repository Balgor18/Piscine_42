/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:05:11 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/25 14:40:10 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		ft_is_separator(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int		num_word(char *str, char *sep)
{
	int i;
	int num;

	num = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i], sep))
			num++;
		i++;
	}
	return (num);
}

int		ft_size_word(char *str, char *sep, int *n)
{
	int total;
	int i;

	i = *n;
	total = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i], sep))
		{
			*n = i;
			return (total);
		}
		else if (ft_is_separator(str[i], sep) == 0)
			total++;
		i++;
	}
	*n = i;
	return (total);
}

char	**ft_malloc(char *st, char *charset)
{
	char	**str;
	int		numword;
	int		n;
	int		i;

	i = 0;
	n = 0;
	numword = num_word(st, charset);
	if (!(str = malloc(sizeof(char*) * (numword + 1))))
		return (0);
	while (i < numword)
	{
		if (!(str[i] = malloc(sizeof(char**) * ft_size_word(st, charset, &n))))
			return (0);
		i++;
		n++;
	}
	if (!(str[i] = malloc(sizeof(char**) * 1)))
		return (0);
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		l;
	int		j;
	char	**modif;

	modif = ft_malloc(str, charset);
	l = 0;
	j = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i], charset))
		{
			modif[j++][l] = '\0';
			l = 0;
		}
		else
			modif[j][l++] = str[i];
		i++;
	}
	i = 0;
	while (modif[i])
		i++;
	return (modif);
}
#include <stdio.h>

int		main(void)
{
	char **test;
	int i;

	i = 0;
	test = ft_split("Hey ahah, bon au taff camarades !", "abc");
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	printf("%s\n", test[i]);
	i = 0;
	while (test[i])
	{
		free(test[i]);
		i++;
	}
	free(test[i]);
	free(test);
	return (0);
}