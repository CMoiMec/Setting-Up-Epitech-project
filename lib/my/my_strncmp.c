/*
** EPITECH PROJECT, 2023
** task01
** File description:
** task01
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (n == 0) {
        return (0);
    }
    if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
        return (my_strncmp(s1 + 1, s2 + 1, n - 1));
    }
    return (*s1 - *s2);
}
