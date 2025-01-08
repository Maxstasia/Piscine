/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restriction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
#    By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+         #
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:45:16 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/29 14:29:12 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	*parse_constraints(char *str)
{
	int		*constraints;
	int		i;
	int		j;

	i = 0;
	j = 0;
	constraints = (int *)malloc(sizeof(int) * 16);
	if (!constraints)
		return (NULL);
	while (str[i] != '\0' && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			constraints[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (constraints);
}

int	validate_input(char *str)
{
	int		i;
	int		count_digits;
	int		count_spaces;

	i = 0;
	count_digits = 0;
	count_spaces = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			count_digits++;
		else if (str[i] == ' ')
		{
			if (i > 0 && str[i - 1] != ' ')
				count_spaces++;
		}
		else
			return (0);
		i++;
	}
	return (count_digits == 16 && count_spaces == 15);
}

int	validate_constraints(int *constraints)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (constraints[i] < 1 || constraints[i] > 4)
			return (0);
		i ++;
	}
	return (1);
}
