/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:32:27 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/14 11:34:57 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
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
