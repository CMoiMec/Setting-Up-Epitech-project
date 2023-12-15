/*
** EPITECH PROJECT, 2023
** task04
** File description:
** day08
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"

char **my_str_to_word_array(char *str, char c)
{
    char **dest;
    int nb = 0;
    int z = 0;
    int j = 0;

    for (int i = 0; str[i] != '\0'; i ++) {
        if (str[i] == c)
            nb ++;
    }
    dest = malloc(sizeof(char *) * (nb + 1));
    for (int i = 0; i < nb; i ++) {
        j = 0;
        for (j; str[j + z] != '\0' && str[j + z] != c; j ++);
        dest[i] = my_strncat_a(str + z, j);
        z = z + j + 1;
    }
    dest[nb] = NULL;
    return dest;
}
