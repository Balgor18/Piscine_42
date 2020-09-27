/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:58:39 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/26 19:43:24 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int argc, char **argv)
{
	int		file;
	char	*content;

	if (argc > 3)
		ft_error();
	if (argc == 2)
	{
		if (!verif_enter(argv[1]))
			ft_error();
		else
		{
			file = open_file("numbers.dict");
			if ((content = read_file(file)) == 0)
				return (0);
		}
		select_need(argv[1], content);
	}
	//if (argc == 3)
	//{
	//	char	*av1;
	//
	//	av1 == av[2];
	//	envoie le dictionnaire en parametre. av1 = chaine de caracteres a envoyer dans la fonctionn
	//}
}
