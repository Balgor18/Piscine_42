/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:42:34 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/27 23:11:06 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		count_line(char *str)
{
	int		i;
	int		line;

	line = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			line++;
		i++;
	}
	return (line - 1);
}

void	select_need(char *arg, char *content)
{
	char	*key[count_line(content)];
	char	*value[count_line(content)];

	ft_split(content, key, value);
}
