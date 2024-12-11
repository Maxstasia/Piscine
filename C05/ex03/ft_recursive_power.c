/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:46:25 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/30 12:29:48 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("25, %d\n", ft_recursive_power(-5, 2));
	printf("0, %d\n", ft_recursive_power(0, 20));
	printf("25, %d\n", ft_recursive_power(5, 2));
}*/
