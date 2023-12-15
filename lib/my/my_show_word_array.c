/*
** EPITECH PROJECT, 2023
** task03
** File description:
** day08
*/

#include "my.h"

int my_show_word_array(char **tab)
{
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i ++;
    }
    return (0);
}
