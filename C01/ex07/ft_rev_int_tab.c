/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:05:47 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/23 09:14:35 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
    int tab[] = {1, 5, 8, 13, 56, 86, 124, 133, 157};
    int size = sizeof(tab) / sizeof(tab[0]);
    int size2 = sizeof(tab);
    int size3 = sizeof(tab[0]);
    
    printf("size : %d\n", size);
    printf("size2 : %d\n", size2);
    printf("size3 : %d\n", size3);

    printf("Avant inversion : ");
    for (int i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("Après inversion : ");
    for (int i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");
}*/
