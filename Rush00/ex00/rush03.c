/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:42:07 by jgao              #+#    #+#             */
/*   Updated: 2020/09/13 19:57:53 by jgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_side(int line, int col, int y, int x)
{
	if ((line == 1 && col == 1) || (line == y && col == 1))
		ft_putchar('A');
	if ((line == 1 && col == x && col != 1) ||
			(line == y && col == x && x != 1 && y != 1))
		ft_putchar('C');
}

void	display_middle(int line, int col, int y, int x)
{
	if ((line == 1 || line == y) || (col == 1 || col == x))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush_next(int line, int col, int y, int x)
{
	while (col <= x)
	{
		if ((line == 1 && col == 1) || (line == 1 && col == x) ||
				(line == y && col == 1) || (line == y && col == x))
			display_side(line, col, y, x);
		else
			display_middle(line, col, y, x);
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	line = 1;
	if (x >= 1)
		while (line <= y)
			rush_next(line++, 1, y, x);
}
