/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#include "my.h"

static int my_float2(int cast, char *hex, int *len, double *f)
{
    int neg = 0;

    if (*f < 0.0) {
        my_putchar('-');
        *f = - *f;
        neg = 1;
    }
    cast = (int)*f;
    *f = *f - (double)cast;
    for (int i = my_get_len(cast); i != 0; i --) {
        hex[*len] = ('0' + (cast / my_compute_power_rec(10, i - 1)));
        cast = cast % my_compute_power_rec(10, i - 1);
        *len = *len + 1;
    }
    hex[*len] = '.';
    *len = *len + 1;
    *f = *f + (double)0.00000001;
    return (neg);
}

int my_float(va_list *list, int *total)
{
    double f = va_arg(*list, double);
    char hex[100];
    int len = 0;
    int cast = 0;

    *total += my_float2(cast, hex, &len, &f);
    if ((int)(f * (double)(my_compute_power_rec(10, 7))) % 10 > 5)
        f = f + (double) 0.000001;
    for (int i = 0; i != 6; i ++) {
        f = f * 10.0;
        hex[len] = '0' + (int)f;
        f = f - (double)((int)f);
        len = len + 1;
    }
    hex[len] = '\0';
    my_putstrl2(hex, total);
    return 0;
}
