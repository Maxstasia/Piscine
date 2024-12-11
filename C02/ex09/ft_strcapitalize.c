/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:47:28 by mstasiak          #+#    #+#             */
/*   Updated: 2024/09/23 18:55:38 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start_of_word;

	i = 0;
	is_start_of_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (is_start_of_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!is_start_of_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			is_start_of_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_start_of_word = 0;
		else
			is_start_of_word = 1;
		i++;
	}
	return (str);
}
