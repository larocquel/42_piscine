/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:41:40 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/08 14:45:13 by leoaguia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_last_line(int col, int x)
{
	if (col == 1 || col == x)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	mid_line(int col, int x)
{
	if (col == 1 || col == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	lin;
	int	col;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error: Hey bro, only positive numbers!\n", 39);
		return ;
	}
	lin = 1;
	while (lin <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (lin == 1)
				first_last_line(col, x);
			else if (lin == y)
				first_last_line(col, x);
			else
				mid_line(col, x);
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
