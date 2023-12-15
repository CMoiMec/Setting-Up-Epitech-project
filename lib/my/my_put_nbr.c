/*
** EPITECH PROJECT, 2023
** task07
** File description:
** day03
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
}
