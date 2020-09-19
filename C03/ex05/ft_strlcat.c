/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:52:44 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/18 12:53:55 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	long			nb;

	nb = size;
	i = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	c = 0;
	while (src[c] && (c + i) < (nb - 1))
	{
		dest[i + c] = src[c];
		c++;
	}
	if (size < i)
		return (ft_strlen(src) + size);
	if (c < size)
		dest[i + c] = '\0';
	return (ft_strlen(src) + i);
}
