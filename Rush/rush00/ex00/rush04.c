/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:07:55 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/21 19:18:18 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	pattern_x(int x, int len_x);
void	pattern_y(int y, int x, int len_x);
void	pattern_x_bottom_line(int x, int len_x);

void	rush(int x, int y)
{
	int	len_x;
	int	len_y;

	len_x = x;
	len_y = y;
	if (x == 1)
		write (1, "A\n", 2);
	else if (x > 1 || x == 0)
		pattern_x(x, len_x);
	if (y > 2)
		pattern_y(y, x, len_x);
	if (x > 1 && y >= 2)
		pattern_x_bottom_line(x, len_x);
	else if (x == 1 && y > 1)
		write (1, "C\n", 2);
}

void	pattern_x(int x, int len_x)
{
	while (x > 0)
	{
		if (x == 1)
			ft_putchar('C');
		else if (x == len_x)
			ft_putchar('A');
		else
			ft_putchar('B');
		x --;
	}
	ft_putchar('\n');
}

void	pattern_x_bottom_line(int x, int len_x)
{
	while (x > 0)
	{
		if (x == 1)
			ft_putchar('A');
		else if (x == len_x)
			ft_putchar('C');
		else
			ft_putchar('B');
		x --;
	}
	ft_putchar('\n');
}

void	pattern_y(int y, int x, int len_x)
{
	while (y > 2)
	{
		while (x > 0)
		{
			if (x == len_x || x == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x --;
		}
		x = len_x;
		y --;
		ft_putchar('\n');
	}
}
