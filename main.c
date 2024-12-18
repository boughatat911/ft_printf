#include "ft_printf.h"
#include <stdio.h>
int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}
int main()
{
    int x = ft_printf("bdk\n");
    int q =    printf("bdkb\n");
    printf("{%d}\n{%d}\n",x,q);
}
