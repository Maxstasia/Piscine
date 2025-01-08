/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:52:44 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "World!";
	unsigned int size = 15;
	unsigned int result = ft_strlcat(dest, src, size);

	printf("Résultat de la concaténation : %s\n", dest);
	printf("Taille totale : %u\n", result);
}*/

// COMMENTAIRE
/*
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	// Calculer la longueur de la chaîne dest et src
	dest_len = 0;
	while (dest[dest_len] != '\0') // calculer
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	// Si size est inférieur ou égal à la longueur de dest, 
	// on retourne la taille que la chaîne aurait eu (size + src_len)
	if (size <= dest_len)
		return size + src_len;
	// Sinon, on concatène src à dest dans la limite de size
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// On termine dest par '\0'
	dest[i] = '\0';
	// Retourner la longueur totale de la chaîne qu'on aurait eue
	return dest_len + src_len;
}*/
