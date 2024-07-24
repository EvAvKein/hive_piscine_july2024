/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:12:32 by REDACTED              #+#    #+#             */
/*   Updated: 2024/06/30 14:21:14 by REDACTED             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	create_box(int x, int y, int rw_p, int cl_p)
{
	while (rw_p < y)
	{
		cl_p = 0;
		while (cl_p < x)
		{
			if ((rw_p == 0 || rw_p == y - 1) && (cl_p == 0 || cl_p == x - 1))
				ft_putchar('o');
			else if (rw_p == 0 || rw_p == y - 1)
				ft_putchar('-');
			else if (cl_p == 0 || cl_p == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			cl_p++;
		}
		ft_putchar('\n');
		rw_p++;
	}
}

void	rush(int x, int y)
{
	int	row_v;
	int	col_v;

	row_v = 0;
	col_v = 0;
	if (x < 1 && y < 1)
	{
		write(1, "Values provided below one", 25);
	}
	else
		create_box(x, y, row_v, col_v);
}
