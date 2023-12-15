/*
** EPITECH PROJECT, 2023
** task01
** File description:
** day07
*/

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i ++) {
        if (my_islower(str[i])) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
