/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grille.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:46:44 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/29 14:28:47 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	**init_grid(void)
{
	int		**grid;
	int		i;

	grid = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}
	return (grid);
}

void	free_grid(int **grid)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
