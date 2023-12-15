/*
** EPITECH PROJECT, 2023
** task03
** File description:
** day03
*/

#include "my.h"

char *my_revstr(char *str)
{
    int b = my_strlen(str);
    char temp[b + 1];
    int y = 0;

    for (int i = b - 1; i != -1; i --) {
        temp [y] = str [i];
        y = y + 1;
    }
    temp[b] = '\0';
    for (int i = 0; i < b; i ++) {
        str[i] = temp [i];
    }
    return (str);
}
