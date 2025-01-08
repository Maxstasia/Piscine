/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <mstasiak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:52:09 by mstasiak          #+#    #+#             */
/*   Updated: 2025/01/08 14:48:31 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1 = "   ---+--+1234ab567";
	char	*str2 = "                +42";
	char	*str3 = "               -123";
	char	*str4 = "                987";
	char	*str5 = "       ---+++---+55";

	printf("Test 1: '%s' => -1234, %d\n", str1, ft_atoi(str1));
	printf("Test 2: '%s' =>    %d, %d\n", str2, atoi(str2), ft_atoi(str2));
	printf("Test 3: '%s' =>  %d, %d\n", str3, atoi(str3), ft_atoi(str3));
	printf("Test 4: '%s' =>   %d, %d\n", str4, atoi(str4), ft_atoi(str4));
	printf("Test 5: '%s' =>    55, %d\n", str5, ft_atoi(str5));
}*/
