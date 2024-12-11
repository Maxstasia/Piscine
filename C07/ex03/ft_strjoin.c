/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:06:18 by mstasiak          #+#    #+#             */
/*   Updated: 2024/10/07 10:21:29 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin_suite(int size, char **strs, char *sep, int total_length)
{
	int		i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (!result)
		return (NULL);
	result[total_length] = '\0';
	i = -1;
	while (i ++, i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;
	int		i;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (!result)
			result[0] = '\0';
		return (result);
	}
	total_length = 0;
	i = -1;
	while (i ++, i < size)
		total_length += ft_strlen(strs[i]);
	total_length += ft_strlen(sep) * (size - 1);
	return (ft_strjoin_suite(size, strs, sep, total_length));
}
/*
#include <stdio.h>

int main(void)
{
	char *strs[] = {
		"Il", "n'y", "a", "pas", "de",
		"bonne", "ou", "de", "mauvaise", "situation"
	};
	char *sep = " ";
	char *result;

	result = ft_strjoin(10, strs, sep); //test de ft_strjoin

	// Vérifier si ft_strjoin a retourné NULL
	if (result)
	{
		printf("%s\n", result); // Affiche : "Hello World from 42"
		free(result); // Libérer la mémoire allouée
	}
	else
	{
		printf("Erreur d'allocation.\n");
	}
	return (0);
}*/
