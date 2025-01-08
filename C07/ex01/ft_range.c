/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:05:44 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size + 1);
	if (!range)
		return (NULL);
	i = -1;
	while (i ++, i < size)
		range[i] = min + i;
	return (range);
}
/*
#include <stdio.h>

int main(void)
{
    int min = 3;
    int max = 100;
    int *range;
    int i;

    range = ft_range(min, max);
    if (!range)
    {
        printf("Erreur : allocation échouée ou min >= max.\n");
        return (1);
    }
    i = 0;
    while (i < (max - min))
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
    free(range);
    return (0);
}*/
