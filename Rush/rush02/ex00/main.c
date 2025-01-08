/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:36:47 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

char	*g_buffer;

int	main(int argc, char **argv)
{
	int		i;
	char	*dictionary;

	i = 0;
	dictionary = "includes/numbers.dict";
	if (argc > 3)
		return (0);
	if (argc == 2)
	{
		if (check_nbr(argv[1]) == NULL)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (check_dict(dictionary) == 0 || check_all_keys(g_buffer) == 0)
		{
			write(2, "Dict Error\n", 11);
			return (0);
		}
		convert_number(check_nbr(argv[1]));
		free(g_buffer);
		return (0);
	}
	if (argc == 3)
		end_check(argv, dictionary);
}

int	end_check(char **argv, char *dictionary)
{
	if (check_nbr(argv[2]) == NULL)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (check_dict(argv[1]) == 0 || check_all_keys(g_buffer) == 0)
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	else
	{
		dictionary = argv[1];
		convert_number(check_nbr(argv[2]));
		free(g_buffer);
	}
	return (0);
}
