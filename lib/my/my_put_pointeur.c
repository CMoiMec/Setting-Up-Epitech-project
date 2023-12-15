/*
** EPITECH PROJECT, 2023
** put the pointeur
** File description:
** pointeur time
*/

#include "my.h"

int put_pointeur(va_list *list, int *total)
{
    my_putstrl2("0x", total);
    conv_hexa_min(list, total);
    return (0);
}
