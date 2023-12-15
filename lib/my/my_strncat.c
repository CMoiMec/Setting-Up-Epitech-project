/*
** EPITECH PROJECT, 2023
** task01
** File description:
** day07
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(src);
    int z = my_strlen(dest);

    if (z == 0) {
        dest = malloc(sizeof(char) * (nb + 1));
    }
    for (int k = 0; k < nb && src[k] != '\0'; k ++) {
        dest[z + k] = src[k];
    }
    dest[my_strlen(dest)] = '\0';
    return (dest);
}

char *my_strncat_a(char const *src, int nb)
{
    int i = my_strlen(src);
    int k = 0;
    char *dest;

    dest = malloc(sizeof(char) * (nb + 1));
    for (; k < nb && src[k] != '\0'; k ++) {
        dest[k] = src[k];
    }
    dest[k] = '\0';
    return (dest);
}
