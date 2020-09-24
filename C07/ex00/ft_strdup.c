/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:37:59 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/23 11:27:17 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len_src;
	int		i;

	i = 0;
	len_src = ft_strlen(src);
	dup = malloc(sizeof(char) * len_src);
	if (!(dup))
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
