/*
** EPITECH PROJECT, 2023
** Lib
** File description:
** day14
*/

#include "my.h"

int my_isnum(char c)
{
    if (c <= '9' && c >= '0')
        return (1);
    return (0);
}
