/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:49:00 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/29 14:29:23 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

int		**init_grid(void);
void	free_grid(int **grid);
void	print_grid(int **grid);

int		*parse_constraints(char *str);
int		validate_input(char *str);

int		solve(int **grid, int *constraints, int pos);
int		solve_suite(int **grid, int *constraints, int pos);
int		is_valid(int **grid, int *constraints, int pos);
int		is_valid_suite(int **grid, int *constraints, int pos, int row);

int		check_row_left(int **grid, int *constraints, int row);
int		check_row_right(int **grid, int *constraints, int row);
int		check_col_up(int **grid, int *constraints, int col);
int		check_col_down(int **grid, int *constraints, int col);
int		check_all_constraints(int **grid, int *constraints);

#endif
