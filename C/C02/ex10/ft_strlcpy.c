/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:32:27 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/20 17:18:59 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) // < 0
{
	long			i;
	unsigned int	total;

	i = -1;
	total = 0;
	if (size != 0)
	{
		while (++i != (size - 1))
			dest[i] = src[i];
		dest[i] = '\0';
	}
	while (src[total])
		total++;
	return (total);
}

#include <stdio.h>

int		main()
{
	char dest[] = "Neige";
	char src[] = "Norminet";
	int size = 5;
	printf("src %s || dest %s \n",src,dest);
	printf("ft_strlcpy == %d \n",ft_strlcpy(dest,src,size));
	printf("src %s || dest %s \n",src,dest);
}
