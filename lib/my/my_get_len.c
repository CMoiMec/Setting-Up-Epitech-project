/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#include "my.h"

int my_get_len(int nb)
{
    int i = 0;

    for (i; nb > 9; i ++) {
        nb = nb / 10;
    }
    return i + 1;
}
