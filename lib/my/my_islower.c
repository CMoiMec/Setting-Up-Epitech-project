/*
** EPITECH PROJECT, 2023
** Lib
** File description:
** day14
*/

#include "my.h"

int my_islower(char const c)
{
    if (c <= 'z' && c >= 'a')
        return (1);
    return (0);
}
