/*
** EPITECH PROJECT, 2023
** task01
** File description:
** day01
*/

#include "my.h"

char *my_strdup(char const *src)
{
    int ac = my_strlen(src);
    char *dest;

    dest = malloc(sizeof(char) * ac + 1);
    for (int i = 0; src[i] != '\0'; i ++) {
        dest[i] = src[i];
    }
    return (dest);
}
