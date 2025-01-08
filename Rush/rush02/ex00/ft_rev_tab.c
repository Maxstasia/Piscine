/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:40:15 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_rev_tab(char *tab, int size)
{
	int		counter;
	char	c1;
	char	c2;

	counter = 0;
	while (counter < size / 2)
	{
		c1 = tab[counter];
		c2 = tab[size - counter - 1];
		tab[size - 1 - counter] = c1;
		tab[counter] = c2;
		counter++;
	}
}

char	*ft_strpower(int nb)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc((nb + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '1';
	while (i++, i <= nb)
		result[i] = '0';
	result[i] = '\0';
	return (result);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0' )
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
