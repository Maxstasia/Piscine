/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:06:29 by mstasiak          #+#    #+#             */
/*   Updated: 2024/10/10 11:07:30 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_atoi_base(char *str, char *base);
int		is_valid_base(char *base);
char	*ft_convert_from_int(int nbr, char *base);
int		ft_in_base(char c, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*result;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	decimal = ft_atoi_base(nbr, base_from);
	result = ft_convert_from_int(decimal, base_to);
	return (result);
}

int	is_valid_base(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;
	int	index;

	result = 0;
	sign = 1;
	base_len = ft_strlen(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	index = ft_in_base(*str, base);
	while (index != -1)
	{
		result = result * base_len + index;
		str++;
	}
	return (result * sign);
}
