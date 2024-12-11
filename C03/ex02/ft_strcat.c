/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:51:44 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/25 14:05:30 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[100] = "Hello, ";
	char src[] = "World!";

	printf("Before concatenation: '%s'\n", dest);
	ft_strcat(dest, src);
	printf("After concatenation: '%s'\n", dest);

	// Cas avec une chaîne vide
	char dest2[100] = "";
	char src2[] = "Bonjour";
	printf("Before concatenation: '%s'\n", dest2);
	ft_strcat(dest2, src2);
	printf("After concatenation: '%s'\n", dest2);

	return (0);
}*/
