/*
** EPITECH PROJECT, 2023
** sortie d'erreur
** File description:
** écrire dans la sortie d'erreur
*/

#include <unistd.h>

void my_putchar_e(char c)
{
    write(2, &c, 1);
}

int my_putstr_e(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar_e(str[i]);
    }
}
