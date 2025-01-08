/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
#    By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+         #
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:30:09 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/26 13:42:18 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int base_len)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base_rec(-(nbr / base_len), base, base_len);
		ft_putnbr_base_rec(-(nbr % base_len), base, base_len);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base_rec(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!is_valid_base(base))
		return ;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	ft_putnbr_base_rec(nbr, base, base_len);
}
/*
int	main(void)

{
	ft_putnbr_base(42, "0123456789");        // Affiche "42"
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01");               // Affiche "-101010"
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789ABCDEF"); // Affiche "FF"
	write(1, "\n", 1);
	ft_putnbr_base(-255, "poneyvif");        // Affiche "-vif"
	write(1, "\n", 1);
	return (0);
}*/
