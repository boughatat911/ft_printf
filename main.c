#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    close(1);
    int q = printf("SABONA\n");
    int x = ft_printf("BOUGHTAT");
    fprintf(stderr, "mine = %d \nsys = %d", x, q);
}
