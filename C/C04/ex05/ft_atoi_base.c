/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:45:14 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/24 16:00:55 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checknum_in_base(char num, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == num)
			return(i);
		i++;
	}
	return (-1);
}

int		ft_check_base(char *base, int size_base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' ||
				(base[i] < 8 && base[i] < 14) || base[i] == ' ')
			return (1);
		j = i + 1;
		while ( j < size_base )
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_atoi(char *c, int len_base, char *base)
{
	int i;
	int sign;
	int total;

	total = 0;
	i = 0;
	sign = 1;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == ' ')
		i++;
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign *= -1;
		i++;
	}
	while (c[i] && ft_checknum_in_base(c[i], base) >= 0)
	{
		total = total * len_base;
		total = total + (ft_checknum_in_base(c[i], base));
		i++;
	}
	return (total * sign);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++; 
	if (ft_check_base(base, i) == 1)
		return (0);
	return (ft_atoi(str,i,base));
} 
