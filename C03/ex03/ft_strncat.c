/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:52:09 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/25 14:10:32 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	
	ft_strncat(dest, src, 3);
	printf("Résultat après concaténation : %s\n", dest);
}*/
