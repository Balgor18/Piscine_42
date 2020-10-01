/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 13:30:49 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/27 19:35:49 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		open_file(char *c)
{
	int		file;

	file = open(c, O_RDONLY);
	if (file == -1)
		return (0);
	return (file);
}

char	*read_file(int file)
{
	char	buf[4096];
	char	*dup;
	int		strlenbuf;

	read(file, buf, 4096);
	strlenbuf = ft_strlen(buf);
	if (!(dup = malloc(sizeof(*dup) * strlenbuf)))
		return (0);
	dup = ft_strdup(buf);
	close_file(file);
	return (dup);
}

void	close_file(int file)
{
	close(file);
}
