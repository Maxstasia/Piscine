/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:20:21 by mstasiak          #+#    #+#             */
/*   Updated: 2024/10/06 21:59:38 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

char	*check_nbr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (NULL);
		i++;
	}
	i = 0;
	while (str[i] == '0')
		i++;
	if (str[i] == '\0')
		return (&str[i - 1]);
	return (&str[i]);
}

int	check_dict(char *str)
{
	int		fd;
	int		bytes_read;
	int		i;
	char	*temp;

	temp = malloc(1);
	bytes_read = 0;
	i = 1;
	temp[0] = 'x';
	(void)str;
	fd = open(str, O_RDONLY);
	if (fd < 0)
		return (0);
	while (bytes_read++, i != 0)
		i = read(fd, temp, 1);
	free(temp);
	close(fd);
	fd = open(str, O_RDONLY);
	i = 0;
	g_buffer = (char *) malloc(sizeof(char) * bytes_read);
	return (check_dict2(i, fd, bytes_read));
}

int	check_dict2(int i, int fd, int bytes_read)
{
	int		j;

	j = 0;
	if (!g_buffer)
		return (0);
	g_buffer[0] = '\n';
	while (i++, i < bytes_read)
		j = read(fd, &g_buffer[i], 1);
	if (check_dict_body(0) == 0)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

int	check_dict_body(int i)
{
	while (g_buffer[i])
	{
		while ((g_buffer[i] >= 9 && g_buffer[i] <= 13) || g_buffer[i] == 32
			|| (g_buffer[i] == '+' || g_buffer[i] == '-'))
			i++;
		while (g_buffer[i] >= '0' && g_buffer[i] <= '9')
			i++;
		while (g_buffer[i] == 32)
			i++;
		if (g_buffer[i] == ':')
			i++;
		else
			return (0);
		while (g_buffer[i] == 32)
			i++;
		while (g_buffer[i] >= 32 && g_buffer[i] < 127)
			i++;
		while (g_buffer[i] == 32)
			i++;
		if (g_buffer[i] == '\n')
			i++;
		else
			return (0);
	}
	return (1);
}
