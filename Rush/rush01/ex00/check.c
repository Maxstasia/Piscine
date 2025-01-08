/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
#    By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+         #
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:38:20 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/29 14:28:39 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row_left(int **grid, int *constraints, int row)
{
	int		count;
	int		max_height;
	int		col;

	count = 0;
	max_height = 0;
	col = 0;
	while (col < 4)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			count++;
		}
		col++;
	}
	return (count == constraints[8 + row]);
}

int	check_row_right(int **grid, int *constraints, int row)
{
	int		count;
	int		max_height;
	int		col;

	count = 0;
	max_height = 0;
	col = 3;
	while (col >= 0)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			count++;
		}
		col--;
	}
	return (count == constraints[12 + row]);
}

int	check_col_up(int **grid, int *constraints, int col)
{
	int		count;
	int		max_height;
	int		row;

	count = 0;
	max_height = 0;
	row = 0;
	while (row < 4)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			count++;
		}
		row++;
	}
	return (count == constraints[col]);
}

int	check_col_down(int **grid, int *constraints, int col)
{
	int		count;
	int		max_height;
	int		row;

	count = 0;
	max_height = 0;
	row = 3;
	while (row >= 0)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			count++;
		}
		row--;
	}
	return (count == constraints[4 + col]);
}

int	check_all_constraints(int **grid, int *constraints)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (!check_row_left(grid, constraints, i)
			|| !check_row_right(grid, constraints, i)
			|| !check_col_up(grid, constraints, i)
			|| !check_col_down(grid, constraints, i))
			return (0);
		i++;
	}
	return (1);
}
