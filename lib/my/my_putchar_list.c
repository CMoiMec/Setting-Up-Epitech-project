/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** put a char in the standar outpout
*/

#include "my.h"

int my_putcharl2(char c, int *total)
{
    write(1, &c, 1);
    *total += 1;
    return (0);
}

int my_putcharl(va_list *list, int *total)
{
    char c = va_arg(*list, int);

    write(1, &c, 1);
    *total += 1;
    return (0);
}
