/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:24:52 by REDACTED              #+#    #+#             */
/*   Updated: 2024/07/07 17:25:48 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		can_place(int row, int col, int num, int grid[4][4]);

int		solve(int row, int col, int grid[4][4], int clues[16]);

void	print_grid(int grid[4][4])
{
	int		row_i;
	int		col_i;
	char	c;

	row_i = 0;
	col_i = 0;
	while (grid[row_i] && row_i < 4)
	{
		col_i = 0;
		while (grid[row_i][col_i] && col_i < 4)
		{
			c = grid[row_i][col_i] + '0';
			write(1, &c, 1);
			col_i++;
			if (grid[row_i][col_i] && col_i < 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		row_i++;
	}
}

int	coordinates_from_str(char *str, int *coordinates)
{
	int	i;
	int	coordinates_i;

	i = 0;
	coordinates_i = 0;
	while (str[i] && coordinates_i < 16)
	{
		if ((i % 2) == 0 && (str[i] >= '1') && (str[i] <= '4'))
		{
			coordinates[coordinates_i] = str[i] - 48;
			coordinates_i++;
		}
		else if (!(i % 2 && str[i] == ' '))
			return (1);
		i++;
	}
	return (0);
}

int	init_grid(int grid[4][4], int i, int j)
{
	while (i < 4)
	{
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	if (i != 0 && j != 0)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	coordinates[16];
	int	grid[4][4];

	if (argc != 2)
	{
		write(1, "Arg count wrong", 16);
		return (1);
	}
	if (init_grid(grid, 0, 0) || coordinates_from_str(argv[1], coordinates))
	{
		write(1, "Invalid input", 13);
		return (1);
	}
	if (solve(0, 0, grid, coordinates))
		print_grid(grid);
	else
		write(1, "No solution found.\n", 19);
	return (0);
}
