/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:05:11 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/28 15:35:57 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
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
	return (num + 1);
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
	return (total + 1);
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
	if (!(str = malloc(sizeof(char*) * (numword))))
		return (0);
	while (i < numword)
	{
		if (!(str[i] = malloc(sizeof(char) * ft_size_word(st, charset, &n))))
			return (0);
		i++;
		n++;
	}
	//if (!(str[i] = malloc(sizeof(char) * 1)))
	//	return (0);
	return (str);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
char	**ft_split(char *str, char *charset)
{
	int		i;
	int		l;
	int		j;
	char	**modif;

	l = 0;
	j = 0;
	i = 0;

	if (*str == 0)
	{
		write(1, "passa\n", 6);
		return (0);
	}
	//write(1, "passc\n", 6);
	modif = ft_malloc(str, charset);
	while (str[i])
	{
	
		if (ft_is_separator(str[i], charset))
		{
			modif[j++][l] = '\0';
			l = 0;
		}
		else
		{
				modif[j][l++] = str[i];
				ft_putchar('\n');
		ft_putchar(modif[j][0]);
		ft_putchar('\n');
		}
		i++;
	}	
	modif[j][l] = '\0';
	modif[++j] = NULL;
	return (modif);
}
