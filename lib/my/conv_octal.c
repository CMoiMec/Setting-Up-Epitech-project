/*
** EPITECH PROJECT, 2023
** conv to octal
** File description:
** convert a decimal to a octal
*/

#include "my.h"

int conv_octal(va_list *list, int *total)
{
    int nb = va_arg(*list, int);
    int nb2 = nb;
    int taille = 1;
    char oct[] = "01234567";
    int base = my_strlen(oct);
    char *hex;

    for (taille; nb2 / base != 0; taille ++)
        nb2 = nb2 / base;
    hex = malloc(sizeof(const char) * (taille + 1));
    for (int i = 0; nb / base != 0; i ++) {
        hex[i] = oct[nb % base];
        nb = nb / base;
    }
    hex[taille - 1] = oct[nb % base];
    hex[taille] = '\0';
    my_putstrl2(my_revstr(hex), total);
    return (0);
}
