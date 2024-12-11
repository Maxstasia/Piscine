/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:27:11 by mstasiak          #+#    #+#             */
/*   Updated: 2024/10/01 15:47:45 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc < 2)
		return (0);
	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
			write(1, &c, 1);
			j ++;
		}
		write(1, "\n", 1);
		i --;
	}
	return (0);
}
