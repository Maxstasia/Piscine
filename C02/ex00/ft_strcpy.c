/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:03:36 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/20 11:03:42 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Hello, world!";
	char dest[50];  // Destination avec assez d'espace pour contenir src

	ft_strcpy(dest, src);

	printf("Source : %s\n", src);
	printf("Destination : %s\n", dest);

	return (0);
}*/
