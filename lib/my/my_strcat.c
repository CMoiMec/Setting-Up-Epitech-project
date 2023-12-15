/*
** EPITECH PROJECT, 2023
** task01
** File description:
** day07
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(src);
    int z = my_strlen(dest);

    for (int k = 0; src[k] != '\0'; k ++) {
        dest[z + k] = src[k];
    }
    dest[my_strlen(dest) + 1 ] = '\0';
    return (dest);
}
