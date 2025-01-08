/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
#    By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+         #
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:48:16 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/29 14:28:58 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int		**grid;
	int		*constraints;

	if (argc != 2 || !validate_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	constraints = parse_constraints(argv[1]);
	grid = init_grid();
	if (solve(grid, constraints, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free_grid(grid);
	free(constraints);
	return (0);
}
