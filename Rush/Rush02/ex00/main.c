/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:58:39 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/27 23:33:07 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int argc, char **argv)
{
	int		file;
	char	*content;

	content = NULL;
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
}
