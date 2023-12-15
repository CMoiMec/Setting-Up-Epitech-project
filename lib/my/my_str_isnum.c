/*
** EPITECH PROJECT, 2023
** task01
** File description:
** day07
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int a = 1;

    for (int i = 0; str[i]; i ++) {
        if (!my_isnum(str[i]))
            a = 0;
    }
    return (a);
}
