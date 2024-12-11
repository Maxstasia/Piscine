/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:50:31 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/29 14:29:37 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid(int **grid, int *constraints, int pos)
{
	int		row;
	int		col;
	int		i;
	int		j;

	i = 0;
	j = 0;
	row = pos / 4;
	col = pos % 4;
	while (i < 4)
	{
		if (grid[row][i] == grid[row][col] && i != col)
			return (0);
		i ++;
	}
	while (j < 4)
	{
		if (grid[j][col] == grid[row][col] && j != row)
			return (0);
		j ++;
	}
	if (is_valid_suite(grid, constraints, pos, row))
		return (1);
	else
		return (0);
}

int	is_valid_suite(int **grid, int *constraints, int pos, int row)
{
	int		col;

	col = pos % 4;
	if (col == 3)
	{
		if (!check_row_left(grid, constraints, row)
			|| !check_row_right(grid, constraints, row))
			return (0);
	}
	if (row == 3)
	{
		if (!check_col_up(grid, constraints, col)
			|| !check_col_down(grid, constraints, col))
			return (0);
	}
	return (1);
}

int	solve(int **grid, int *constraints, int pos)
{
	int		row;
	int		col;
	int		i;

	i = 0;
	row = pos / 4;
	col = pos % 4;
	if (pos == 16)
	{
		if (check_all_constraints(grid, constraints))
			return (1);
		return (0);
	}
	if (grid[row][col] != 0)
		return (solve(grid, constraints, pos + 1));
	if (solve_suite(grid, constraints, pos))
		return (1);
	else
		return (0);
}

int	solve_suite(int **grid, int *constraints, int pos)
{
	int		row;
	int		col;
	int		i;

	i = 0;
	row = pos / 4;
	col = pos % 4;
	while (i <= 4)
	{
		grid[row][col] = i;
		if (is_valid(grid, constraints, pos))
		{
			if (solve(grid, constraints, pos + 1))
				return (1);
		}
		grid[row][col] = (0);
		i ++;
	}
	return (0);
}

// COMMENTAIRE
/*
int	is_valid(int **grid, int *constraints, int pos)
{
	int		row = pos / 4;
	int		col = pos % 4;

	// Vérification des doublons dans la ligne
	for (int i = 0; i < 4; i++)
	{
		if (grid[row][i] == grid[row][col] && i != col)
			return 0;
	}

	// Vérification des doublons dans la colonne
	for (int i = 0; i < 4; i++)
	{
		if (grid[i][col] == grid[row][col] && i != row)
			return 0;
	}

	// Appliquer les contraintes de la ligne seulement si la ligne est remplie
	if (col == 3) // Si la ligne est complète
	{
		if (!check_row_left(grid, constraints, row)
			|| !check_row_right(grid, constraints, row))
            		return 0;
	}

	// Appliquer les contraintes de la colonne seulement si la colonne est remplie
	if (row == 3) // Si la colonne est complète
	{
		if (!check_col_up(grid, constraints, col)
			|| !check_col_down(grid, constraints, col))
			return 0;
	}
	return 1;
}

int	solve(int **grid, int *constraints, int pos)

{
	int		row = pos / 4;
	int		col = pos % 4;

	if (pos == 16)
	{
		if (check_all_constraints(grid, constraints))
			return 1;
		return 0;
	}

	// Si la case est déjà remplie, passer à la suivante
	if (grid[row][col] != 0)
		return solve(grid, constraints, pos + 1);


	for (int i = 1; i <= 4; i++)

	{
		grid[row][col] = i;

		// Appliquer une validation après
		// chaque placement pour éviter de remplir inutilement
		if (is_valid(grid, constraints, pos))
		{
			if (solve(grid, constraints, pos + 1))
				return 1;
		}

		grid[row][col] = 0; // Réinitialiser si l'essai échoue
	}
	return 0;
}
*/
