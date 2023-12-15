/*
** EPITECH PROJECT, 2023
** task02
** File description:
** day06
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    if (n > my_strlen(src)){
        my_strcpy(dest, src);
    } else{
        for (int i = 0; i != n; i ++) {
            dest[i] = src[i];
        }
    }
    return (dest);
}
