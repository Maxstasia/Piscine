/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:20:49 by ajosse            #+#    #+#             */
/*   Updated: 2024/10/06 12:20:53 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

char	*create_group(char a, char b, char c)
{
	char	*group;

	group = malloc(4 * sizeof(char));
	if (!group)
		return (NULL);
	group[0] = a;
	group[1] = b;
	group[2] = c;
	group[3] = '\0';
	return (group);
}

void	print_group(char *group)
{
	char	*temp;

	temp = NULL;
	if (group[0] != '0')
	{
		temp = create_group(group[0], '\0', '\0');
		ft_putstr(get_value(temp));
		write(1, " ", 1);
		ft_putstr(get_value("100"));
		if ((group[1] != '0') || (group[2] != '0'))
			write(1, " ", 1);
		free(temp);
	}
	print_group_end(group, temp);
}

void	print_group_end(char *group, char *temp)
{
	if ((group[1] == '1')
		&& (ft_strcmp(get_value(&group[1]), "not found") != 0))
	{
		ft_putstr(get_value(&group[1]));
		free(group);
		return ;
	}
	else if (group[1] != '0')
	{
		temp = create_group(group[1], '0', '\0');
		ft_putstr(get_value(temp));
		free(temp);
		if (group[2] != '0')
			write(1, " ", 1);
		else
		{
			free(group);
			return ;
		}
		ft_putstr(get_value(&group[2]));
	}
	else if (group[2] != '0')
		ft_putstr(get_value(&group[2]));
	free(group);
}
