/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:45:14 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/16 12:47:31 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base)
{
	
}

int		ft_str_is_numeric(char str)
{
	if (str < 48 || str > 57)
		return (0);
	return (1);
}

int		ft_if_nega(char *str)
{
	int i;
	int nega;

	nega = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			nega++;
		i++;
	}
	return (nega % 2);
}

int		ft_if_last_enum(char cha, char next_char)
{
	if (ft_str_is_numeric(cha) && ft_str_is_numeric(next_char) == 0)
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int if_num;
	int nega;
	int total;

	total = 0;
	nega = ft_if_nega(str);
	if_num = 0;
	i = -1;
	while (str[++i])
	{
		if (if_num && str[i])
			break ;
		if (ft_str_is_numeric(str[i]))
		{
			total = total + str[i] - 48;
			if (ft_str_is_numeric(str[i + 1]))
				total = total * 10;
			if_num = ft_if_last_enum(str[i], str[i + 1]);
		}
	}
	if (nega)
		total = total * -1;
	return (total);
}
