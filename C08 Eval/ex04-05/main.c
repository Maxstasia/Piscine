#include "ft_stock_str.h"
#include "ft_show_tab.c"
#include "ft_strs_to_tab.c"

int main(int argc, char **argv)
{
	t_stock_str *tab = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(tab);
	return (0);
}