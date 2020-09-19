/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 20:00:05 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/15 15:12:42 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char str)
{
	if ((str > 'z' || str < 'a') && (str > 'Z' || str < 'A'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		if (ft_str_is_alpha(str[i - 1]) == 0)
			if (ft_str_is_alpha(str[i]) == 1)
				if (str[i - 1] > '9' || str[i - 1] < '0')
					str[i] = str[i] - 32;
	}
	return (str);
}
