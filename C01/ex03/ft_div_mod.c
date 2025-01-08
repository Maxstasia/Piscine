/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:48:43 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 20;
	int b = 4;
	int div = 0;
	int mod = 0;

	printf ("Avant :\n A = %d\n B = %d\n div = %d\n mod = %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf ("Après :\n A = %d\n B = %d\n div = %d\n mod = %d\n", a, b, div, mod);
}*/
