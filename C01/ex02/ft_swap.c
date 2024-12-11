/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:33:29 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/19 15:46:37 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf ("Avant :\n X = %d\n Y = %d\n\n", x, y);
	ft_swap(&x, &y);
	printf ("Après :\n X = %d\n Y = %d\n\n", x, y);
}*/
