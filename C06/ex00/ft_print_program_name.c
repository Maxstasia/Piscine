/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:22:41 by mstasiak          #+#    #+#             */
/*   Updated: 2024/10/01 12:48:22 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc <= 0)
		return (0);
	while (argv[0][i] != '\0')
	{
		c = argv[0][i];
		write(1, &c, 1);
		i ++;
	}
	write(1, "\n", 1);
	return (0);
}
