/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:05:11 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/27 23:33:40 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen_withsep(char *c, char sep, int *n)
{
	int		j;
	int		len;

	len = 0;
	j = 0;
	while (c[j] == ' ')
		j++;
	while (c[j] != sep)
	{
		if (c[j] != ' ' && c[j] != '\n')
		{
			len++;
		}
		j++;
	}
	*n = *n + j;
	return (len);
}

char	insert_value(char *str, char *tab, int *n, char sep)
{
	int		i;
	int		len;
	int		ibis;
	int		strlen;

	strlen = ft_strlen(str);
	i = *n;
	len = i;
	ft_strlen_withsep(&str[i], sep, &i);
	printf("sep = ' %d ' \n", sep);
	ibis = 0;
	while (len < i && i < (strlen - 1))
	{
		if (str[len] != ':' && str[len] != ' ' && str[len] != '\n')
		{
			tab[ibis] = str[len];
			ibis++;
		}
		len++;
	}
	tab[ibis] = '\0';
	printf("key == %s\n", tab);
	*n = i;
	return (*tab);
}

void	value_in_tab(char *str, char **key, char **value)
{
	int		i;
	int		j;
	int		strlen;
	int		test;

	test = 0;
	strlen = ft_strlen(str);
	i = 0;
	j = 0;
	while (str[i] && i < (strlen - 1))
	{
		printf("Je rentre avec : \n");
		insert_value(&str[i], key[j], &i, ':');
		printf("Je rentre avec \\n \n");
		insert_value(&str[i], value[j], &i, '\n');
		i++;
		j++;
	}
}

void	ft_split(char *str, char **key, char **value)
{
	int		i;
	int		j;
	int		strlen;

	strlen = ft_strlen(str);
	j = 0;
	i = 0;
	while (str[i] && i < (strlen - 1))
	{
		key[j] = malloc(sizeof(char*) * ft_strlen_withsep(&str[i], ':', &i));
		value[j] = malloc(sizeof(char*) * ft_strlen_withsep(&str[i], '\n', &i));
		j++;
		i++;
	}
	value_in_tab(str, key, value);
}
