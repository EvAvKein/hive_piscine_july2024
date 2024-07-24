/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:10:14 by REDACTED              #+#    #+#             */
/*   Updated: 2024/07/07 17:27:11 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	right_is_valid(int grid[4][4], int clues[16]);
int	left_is_valid(int grid[4][4], int clues[16]);
int	bottom_is_valid(int grid[4][4], int clues[16]);
int	top_is_valid(int grid[4][4], int clues[16]);

int	can_place(int row, int col, int num, int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(int grid[4][4], int clues[16])
{
	if (right_is_valid(grid, clues) && left_is_valid(grid, clues)
		&& top_is_valid(grid, clues) && bottom_is_valid(grid, clues))
		return (1);
	return (0);
}

int	solve(int row, int col, int grid[4][4], int clues[16])
{
	int	num;

	num = 1;
	if (row == 4)
		return (is_valid(grid, clues));
	if (col == 4)
		return (solve(row + 1, 0, grid, clues));
	while (num <= 4)
	{
		if (can_place(row, col, num, grid))
		{
			grid[row][col] = num;
			if (solve(row, col + 1, grid, clues))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
