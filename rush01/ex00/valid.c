/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:49:31 by REDACTED              #+#    #+#             */
/*   Updated: 2024/07/07 17:28:33 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	count_visible(int *line, int clue)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count == clue);
}

int	top_is_valid(int grid[4][4], int clues[16])
{
	int	temp[4];
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col < 4)
	{
		while (row < 4)
		{
			temp[row] = grid[row][col];
			row++;
		}
		row = 0;
		if (!count_visible(temp, clues[col]))
			return (0);
		col ++;
	}
	return (1);
}

int	bottom_is_valid(int grid[4][4], int clues[16])
{
	int	temp[4];
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col < 4)
	{
		while (row < 4)
		{
			temp[row] = grid[4 - 1 - row][col];
			row++;
		}
		row = 0;
		if (!count_visible(temp, clues[col + 4]))
			return (0);
		col++;
	}
	return (1);
}

int	left_is_valid(int grid[4][4], int clues[16])
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (!count_visible(grid[row], clues[row + 8]))
			return (0);
		row++;
	}
	return (1);
}

int	right_is_valid(int grid[4][4], int clues[16])
{
	int	temp[4];
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			temp[col] = grid[row][4 - 1 - col];
			col++;
		}
		col = 0;
		if (!count_visible(temp, clues[row + 12]))
			return (0);
		row ++;
	}
	return (1);
}
