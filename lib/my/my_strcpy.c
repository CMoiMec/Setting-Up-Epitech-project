/*
** EPITECH PROJECT, 2023
** task01
** File description:
** day06
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; i != my_strlen(src); i ++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
