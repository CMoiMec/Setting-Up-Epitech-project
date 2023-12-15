/*
** EPITECH PROJECT, 2023
** Lib
** File description:
** day14
*/

#include "my.h"

int my_isalnum(char c)
{
    if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
        return (1);
    if (c <= '9' && c >= '0')
        return (1);
    return (0);
}
