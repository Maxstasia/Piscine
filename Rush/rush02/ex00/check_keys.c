/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_keys.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <mstasiak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:46:31 by nadeluge          #+#    #+#             */
/*   Updated: 2024/10/06 18:18:36 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

int	check_all_keys(char *dict)
{
	if (check_keys_1(dict) == 1
		&& check_keys_2(dict) == 1
		&& check_keys_3(dict) == 1
		&& check_keys_4(dict) == 1
		&& check_keys_5(dict) == 1)
		return (1);
	else
		return (0);
}

int	check_adjacent(char *ptr, char *to_find)
{
	int		n;
	char	c;

	n = ft_strlen(to_find);
	ptr--;
	c = *ptr;
	if (c >= '0' && c <= '9')
		return (0);
	ptr += n + 1;
	c = *ptr;
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

int	check_keys_1(char *dict)
{
	char	*to_find;
	int		start;
	char	*ptr;

	start = 0;
	to_find = create_group('0', '\0', '\0');
	while (to_find[0] <= '9')
	{
		start = 0;
		while (dict[start] != '\0')
		{
			ptr = ft_strstr(&dict[start], to_find);
			if (ptr == NULL)
				return (0);
			if (check_adjacent(ptr, to_find) == 1)
				to_find[0]++;
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

int	check_keys_2(char *dict)
{
	char	*to_find;
	int		start;
	char	*ptr;

	start = 0;
	to_find = create_group('1', '0', '\0');
	while (to_find[1] <= '9')
	{
		start = 0;
		while (dict[start] != '\0')
		{
			ptr = ft_strstr(&dict[start], to_find);
			if (ptr == NULL)
				return (0);
			if (check_adjacent(ptr, to_find) == 1)
				to_find[1]++;
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

int	check_keys_3(char *dict)
{
	char	*to_find;
	int		start;
	char	*ptr;

	start = 0;
	to_find = create_group('2', '0', '\0');
	while (to_find[0] <= '9')
	{
		start = 0;
		while (dict[start] != '\0')
		{
			ptr = ft_strstr(&dict[start], to_find);
			if (ptr == NULL)
				return (0);
			if (check_adjacent(ptr, to_find) == 1)
				to_find[0]++;
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
