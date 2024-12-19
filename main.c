#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int x = ft_printf("bd%sb\n",NULL);
    int q =    printf("bd%sb\n",NULL);
    printf("{%d}\n{%d}\n",x,q);
}
