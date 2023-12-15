/*
** EPITECH PROJECT, 2023
** task05
** File description:
** day06
*/

#include "my.h"

int test(char *str, char *to_find)
{
    int check = 1;

    for (int e = 0; to_find[e] != '\0'; e++) {
        if (str[e] != to_find[e]) {
            check = 0;
        }
    }
    return check;
}

char *my_strstr(char *str, char *to_find)
{
    int i = 0;
    int stats;

    while (str[i] != '\0') {
        stats = test(&str[i], to_find);
        if (stats) {
            return &str[i];
        }
        i = i + 1;
    }
    return (NULL);
}
