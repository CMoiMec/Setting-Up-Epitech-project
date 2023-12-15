/*
** EPITECH PROJECT, 2023
** print
** File description:
** c pour ton bien
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
