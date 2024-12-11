#include "ft_stock_str.h"
#include <stdlib.h>

/* Fonction pour calculer la longueur d'une chaîne */
int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

/* Fonction pour copier une chaîne */
char *ft_strdup(char *src)
{
	int i = 0;
	char *dest;
	
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* Fonction principale pour remplir le tableau de structures */
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
			return (NULL);
		i++;
	}
	array[i].str = 0;  // Dernier élément pour marquer la fin du tableau
	return (array);
}