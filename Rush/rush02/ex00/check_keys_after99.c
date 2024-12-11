/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_keys_after99.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:01:10 by ajosse            #+#    #+#             */
/*   Updated: 2024/10/06 21:01:14 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

int	check_keys_4(char *dict)
{
	int		start;
	char	*ptr;

	start = 0;
	while (dict[start] != '\0')
	{
		ptr = ft_strstr(&dict[start], "100");
		if (ptr == NULL)
			return (0);
		if (check_adjacent(ptr, "100") == 1)
			return (1);
		start++;
	}
	return (0);
}

int	check_keys_5(char *dict)
{
	char	*to_find;
	int		start;
	char	*ptr;
	int		power;

	start = ((power = 0));
	to_find = malloc(50);
	while (power++, power++, power++, power < 37)
	{
		start = 0;
		while (dict[start] != '\0')
		{
			to_find = ft_strpower(power);
			ptr = ft_strstr(&dict[start], to_find);
			if (ptr == NULL)
				return (0);
			if (check_adjacent(ptr, to_find) == 1)
				break ;
			start++;
		}
		if (dict[start] == '\0')
			return (0);
	}
	free(to_find);
	return (1);
}
