#include "ft.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Hello, World!";
	int a = 42, b = 24;

	ft_putstr(str);
	ft_putchar('\n');
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	printf("Length of string: %d\n", ft_strlen(str));
	printf("String compare: %d\n", ft_strcmp("abc", "abc"));

	return (0);
}