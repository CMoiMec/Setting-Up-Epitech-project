/*
** EPITECH PROJECT, 2023
** task05
** File description:
** day04
*/

#include "my.h"

int my_isnum(const char c)
{
    return ((c >= '0' && c <= '9') ? 1 : 0);
}

int my_getnbr(char const *str)
{
    int signe = 1;
    int i = 0;
    int num = 0;

    while (str[i] == '-' || str[i] == '+' || str[i] == ' ') {
        if (str[i] == '-')
            signe = signe * - 1;
        i ++;
    }
    for (i; my_isnum(str[i]) && str[i] != '\0'; i ++) {
        num = num + str[i] - '0';
        num = num * 10;
    }
    num = ((num / 10) * signe);
    if (num < -2147483648 || num > 2147483647)
        return (0);
    return (num);
}
