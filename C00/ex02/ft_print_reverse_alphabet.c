/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
#    By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+         #
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:54:55 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/18 14:03:12 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = 'z';
	while (n >= 'a')
	{
		write(1, &n, 1);
		n--;
	}
}
