/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
#    By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+         #
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:17:04 by mstasiak          #+#    #+#             */
/*   Updated: 2024/10/01 10:17:07 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)s
{
	printf("%d, %d, %d", ft_is_prime(3), ft_is_prime(5), ft_is_prime(214748300));
	return (0);
}*/
