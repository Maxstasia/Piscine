/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:59:33 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

void	convert_number(char *nb)
{
	int		i;
	int		n;
	char	*group;
	int		initial_n;
	char	*temp;

	group = ((temp = NULL));
	n = ((initial_n = ft_strlen(nb)));
	if (n > 39)
		write(2, "Error\n", 6);
	if (n > 39)
		return ;
	if (n == 1)
	{
		ft_putstr(get_value(nb));
		return ;
	}
	nb = print_first_group(nb, n, group, temp);
	if (initial_n < 3)
		return ;
	i = -3;
	n = ft_strlen(nb);
	while (i++, i++, i++, i < n)
		manage_group(nb, i, initial_n, group);
}

char	*print_first_group(char *nb, int n, char *group, char *temp)
{
	if (n % 3 == 2)
	{
		group = create_group('0', nb[0], nb[1]);
		print_group(group);
		if (n == 2)
			return (nb);
		write(1, " ", 1);
		temp = ft_strpower(n - 2);
		ft_putstr(get_value(temp));
		free(temp);
		nb += 2;
	}
	else if (n % 3 == 1)
	{
		group = create_group('0', '0', nb[0]);
		print_group(group);
		if (n == 1)
			return (nb);
		write(1, " ", 1);
		temp = ft_strpower(n - 1);
		ft_putstr(get_value(temp));
		free(temp);
		nb += 1;
	}
	return (nb);
}

void	manage_group(char *nb, int i, int initial_n, char *group)
{
	char	*temp;

	temp = NULL;
	if (i % 3 == 0)
	{
		group = create_group(nb[i], nb[i + 1], nb[i + 2]);
		if (!(initial_n % 3 == 0 && i == 0))
		{
			if (ft_strcmp(group, "000") != 0)
				write(1, " ", 1);
		}
		print_group(group);
		if (nb[i + 3] != '\0')
		{
			if (ft_strncmp(&(nb[i]), "000", 3) != 0)
			{
				write(1, " ", 1);
				temp = ft_strpower((ft_strlen(nb)) - i - 3);
				ft_putstr(get_value(temp));
				free(temp);
			}
		}
		else
			return ;
	}
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
