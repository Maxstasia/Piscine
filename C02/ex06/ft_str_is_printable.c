/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:13:15 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/23 17:26:44 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
/*
#include <stdio.h>

int		main()
{
	char	c;

	c = 1;
	while (c != 0)
	{
		if ((c < ' ' || c > '~') == ft_str_is_printable(&c))
		{
			printf("Fail for char in decimal: %d\n", (int)c);
			return (0);
		}
		c++;
	}

	printf("Success\n");
}*/
