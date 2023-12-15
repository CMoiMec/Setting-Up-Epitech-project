/*
** EPITECH PROJECT, 2023
** my_nbr
** File description:
** put a number in terminal
*/

#include "my.h"

static void printlimite(int *total)
{
    my_putcharl2('2', total);
    my_putcharl2('1', total);
    my_putcharl2('4', total);
    my_putcharl2('7', total);
    my_putcharl2('4', total);
    my_putcharl2('8', total);
    my_putcharl2('3', total);
    my_putcharl2('6', total);
    my_putcharl2('4', total);
    my_putcharl2('8', total);
}

static void printlimiteneg(int *total)
{
    my_putcharl2('-', total);
    my_putcharl2('2', total);
    my_putcharl2('1', total);
    my_putcharl2('4', total);
    my_putcharl2('7', total);
    my_putcharl2('4', total);
    my_putcharl2('8', total);
    my_putcharl2('3', total);
    my_putcharl2('6', total);
    my_putcharl2('4', total);
    my_putcharl2('8', total);
}

static void maincalc(int *divmax, int nb, int *total)
{
    while (*divmax >= 1) {
        my_putcharl2(((nb / *divmax) % 10) + 48, total);
        *divmax = *divmax / 10;
    }
}

static int extreme(int nb, int *total)
{
    if (nb == -2147483648) {
        printlimiteneg(total);
        return (1);
    }
    if (nb == 2147483648) {
        printlimite(total);
        return (1);
    }
    return (0);
}

int my_put_nbrl(va_list *list, int *total)
{
    int nb = va_arg(*list, int);
    int divmax = 1000000000;

    if (nb == 0) {
        my_putcharl2('0', total);
        return (0);
    }
    if (extreme(nb, total) == 1)
        return (0);
    if (nb < 0) {
        my_putcharl2('-', total);
        nb = nb * -1;
    }
    while ((nb / divmax) == 0)
        divmax = divmax / 10;
    maincalc(&divmax, nb, total);
    return (0);
}
