/*
** EPITECH PROJECT, 2023
** task07
** File description:
** day05
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int i = nb;

    while (1) {
        if (my_is_prime(i) == 1) {
            return (i);
        }
        i = i + 1;
    }
}
