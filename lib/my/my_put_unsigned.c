/*
** EPITECH PROJECT, 2023
** Printf
** File description:
** YEEET
*/

#include "my.h"

int my_put_uns(va_list *list, int *total)
{
    unsigned int nb = va_arg(*list, unsigned int);

    if (nb < 0) {
        nb = -nb;
        my_putcharl2('-', total);
    }
    if (nb > 9) {
        my_put_nbrl2(nb / 10, total);
        my_putcharl2((nb % 10) + '0', total);
    } else {
        my_putcharl2(nb + '0', total);
    }
}
