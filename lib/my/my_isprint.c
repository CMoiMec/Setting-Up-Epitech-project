/*
** EPITECH PROJECT, 2023
** Lib
** File description:
** day14
*/

#include "my.h"

int my_isprint(char c)
{
    if (c <= 126 && c >= 32)
        return (1);
    return (0);
}
