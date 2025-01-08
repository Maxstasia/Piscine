/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:36:22 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

int	is_space(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		j;
	char	*new_ptr;

	new_ptr = &*str;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (new_ptr[0] != '\0')
	{
		if (new_ptr[0] == to_find[j])
		{
			while (new_ptr[0] == to_find[j] && to_find[j])
			{
				j++;
				new_ptr++;
			}
			if (to_find[j] == '\0')
				return (new_ptr - j);
		}
		j = 0;
		new_ptr++;
	}
	return (NULL);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*get_value(char *key_to_find)
{
	int		i;
	char	*value;
	char	*result;
	int		length;

	value = find_value(key_to_find);
	if (value == NULL)
		return ("not found");
	i = ((length = 0));
	while (value[i] != ':')
		i++;
	i++;
	while (is_space(value[i]) == 1)
		i++;
	while (length++, value[i] != '\n')
		i++;
	value += (i - length + 1);
	result = malloc ((length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strncpy(result, value, length - 1);
	return (result);
}

char	*find_value(char *key_to_find)
{
	int		start;
	char	*ptr;

	start = 0;
	while (g_buffer[start] != '\0')
	{
		ptr = ft_strstr(&g_buffer[start], key_to_find);
		if (ptr == NULL)
			return (NULL);
		if (check_adjacent(ptr, key_to_find) == 1)
			return (ptr);
		start++;
	}
	return (NULL);
}
