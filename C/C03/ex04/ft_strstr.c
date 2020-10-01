/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 21:39:00 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/28 12:57:51 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		checkif_is_to_find(int int_str, char *str, char *to_find)
{
	int j;
	int sizefind;

	sizefind = ft_strlen(to_find);
	j = 0;
	while (str[int_str] == to_find[j] && to_find[j])
	{
		j++;
		int_str++;
	}
	if (j == sizefind)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int bo;

	bo = 0;
	j = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
			bo = checkif_is_to_find(i, str, to_find);
		i++;
		if (bo)
			return (&str[i - 1]);
	}
	return (0);
}
