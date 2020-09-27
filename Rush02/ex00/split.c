/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:05:11 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/26 19:21:15 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen_withsep(char *c, char sep, int *n)
{
	//int i;
	int j;
	int len;

	len = 0;
	//i = *n;
	j = 0;
	while (c[j] == ' ')
	{
		j++;
	}
	//printf("a c[j] = %c\n",c[j]);
	while (c[j] != sep)
	{
		if (c[j] != ' ' && c[j] != '\n')
		{
			len++;
		}
		j++;
	}
	//printf("b c[j] = %c\n",c[j]);
	//printf("len = %d\n",len);
	*n = *n + j;
	return (len);
}

/*int		ft_is_separator(char c, char *sep)
{
	int		i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}*/

char	insert_value(char *str, char *tab, int *n, char sep)
{
	int i;
	int len;
	int ibis;

	int strlen;
	strlen = ft_strlen(str);

	i = *n;
	len = i;
	//printf("Valeur de i avant %d \n",i);
	//printf("strlen sep %d \n",ft_strlen_withsep(&str[i], sep, &i));
	ft_strlen_withsep(&str[i], sep, &i);
	//printf("Valeur de i apres %d  || str[i] == %s\n", i, &str[i]);
	printf("sep = ' %d ' \n",sep);
	ibis = 0;
	
	while (len < i && i < (strlen - 1))
	{
		//printf("%d <= %d\n", len, i);
		//printf("str[len] = %c\n", str[len]);
		//printf("%c \n", str[len]);
		if (str[len] != ':' && str[len] != ' ' && str[len] != '\n') //&& str[len] != '\n')
		{
			tab[ibis] = str[len];
			ibis++;
		}
		len++;
	}
	tab[ibis] = '\0';
	//else if ()
	printf("key == %s\n",tab);
	*n = i;
	return (*tab);
}

void	value_in_tab(char *str, char **key, char **value)
{
	int i;
	int j;
	int ibis;
	int strlen;

	int test;

	test = 0;
	strlen = ft_strlen(str);
	i = 0;
	j = 0;
	while (str[i] && i < (strlen - 1))
	{
		printf ("Je rentre avec : \n");
		insert_value(&str[i], key[j], &i, ':');
		printf ("Je rentre avec \\n \n");
		insert_value(&str[i], value[j], &i, '\n');
		/*len = i;
		ft_strlen_withsep(&str[i], '\n', &i);
		ibis = 0;
		while (len < i)
		{
			if (str[len] != '\n' && str[len] != ' ' && str[len] != ':')
			{
				value[j][ibis] = str[len];
				ibis++;
			}
			printf("key [0] == %s \n",key[0]);
			printf("value [%d] == %s \n\n",j,value[j]);
			len++;
		}
		value[j][ibis] = '\0';*/
		i++;
		j++;
	}
}


void	ft_split(char *str, char **key, char **value)
{
	int		i;
	int		j;
	int strlen;
	
	strlen = ft_strlen(str);
	j = 0;
	i = 0;
	while (str[i] && i < (strlen - 1))
	{
		key[j] = malloc(sizeof(char*) * ft_strlen_withsep(&str[i], ':', &i));
		value[j] = malloc(sizeof(char*) * ft_strlen_withsep(&str[i], '\n', &i));
		j++;
		i++;
	}
	value_in_tab(str, key, value);
	// remove when test is done 
	/*i = 0;
	while (key[i] && value[i] && i < 41)
	{
		printf("key %s", key[i]);
		printf(" value %s\n", value[i]);
		i++;
	}*/
}
