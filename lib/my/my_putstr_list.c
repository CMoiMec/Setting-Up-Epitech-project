/*
** EPITECH PROJECT, 2023
** my put str
** File description:
** put a sring
*/

#include "my.h"

int my_putstrl2(char *str, int *total)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putcharl2(str[i], total);
    return (0);
}

int my_putstrl(va_list *list, int *total)
{
    char *str = va_arg(*list, char *);

    for (int i = 0; str[i] != '\0'; i++)
        my_putcharl2(str[i], total);
    return (0);
}
