/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:50:54 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		n;

	n = nb;
	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);0
	else
	{
		while (power > 1)
		{
			n *= nb;
			power --;
		}
	}
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("25, %d\n", ft_iterative_power(-5, 2));
	printf("0, %d\n", ft_iterative_power(0, 20));
	printf("25, %d\n", ft_iterative_power(5, 2));
}*/
