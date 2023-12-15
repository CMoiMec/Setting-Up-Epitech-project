/*
** EPITECH PROJECT, 2023
** task01
** File description:
** day07
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    if (my_strlen(str) == 0)
        return (str);
    for (int j = 0; str[j]; j ++) {
        if (my_isupper(str[j]))
            str[j] = str[j] + 32;
    }
    if (my_islower(str[0])) {
        str[0] = str[0] - 32;
    }
    for (int i = 1; str[i]; i ++) {
        if (!my_isalnum(str[i - 1]) && my_islower(str[i])) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
