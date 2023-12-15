/*
** EPITECH PROJECT, 2023
** Mini printf
** File description:
** Here we go again
*/

#include "my.h"
#include <stdio.h>

static void checker(char const c, char const prec, va_list *list, int *total)
{
    int (*func[FSIZE])(va_list *, int *) = {my_put_nbrl, my_put_nbrl,
    my_putstrl, my_putcharl, my_put_pourcent, conv_hexa_min, conv_hexa_maj,
    conv_octal, conv_bin, put_pointeur, my_wr_sc, my_wr_sc_maj, my_put_uns,
    my_float, my_float};
    char flag[FSIZE] = {'d', 'i', 's', 'c', '%', 'x', 'X', 'o', 'b', 'p', 'e',
    'E', 'u', 'f', 'F'};
    int exec = 0;

    for (int i = 0; i < FSIZE; i++) {
        if (c == flag[i]) {
            func[i](list, total);
            exec = 1;
        }
    }
    if (exec == 0) {
        my_putcharl2(prec, total);
        my_putcharl2(c, total);
    }
}

int my_printf(const char *format, ...)
{
    va_list list;
    int total = 0;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            checker(format[i], format[i - 1], &list, &total);
        } else {
            my_putcharl2(format[i], &total);
        }
    }
    va_end(list);
    return (total);
}
