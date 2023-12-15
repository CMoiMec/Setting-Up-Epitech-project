/*
** EPITECH PROJECT, 2023
** conv hexa min
** File description:
** convert a decimal to a hexa in min
*/

#include "my.h"

int conv_hexa_maj(va_list *list, int *total)
{
    unsigned long long nb = va_arg(*list, unsigned long long);
    unsigned long long nb2 = nb;
    int taille = 1;
    char hexa[] = "0123456789ABCDEF";
    int base = my_strlen(hexa);
    char *hex;

    for (taille; nb2 / base != 0; taille ++)
        nb2 = nb2 / base;
    hex = malloc(sizeof(const char) * (taille + 1));
    for (int i = 0; nb / base != 0; i ++) {
        hex[i] = hexa[nb % base];
        nb = nb / base;
    }
    hex[taille - 1] = hexa[nb % base];
    hex[taille] = '\0';
    my_putstrl2(my_revstr(hex), total);
    return (0);
}
