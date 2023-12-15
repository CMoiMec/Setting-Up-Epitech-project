/*
** EPITECH PROJECT, 2023
** task05
** File description:
** day05
*/

int my_compute_square_root(int nb)
{
    int i;

    while (nb > i * i) {
        i = i + 1;
    }
    if (i * i == nb) {
        return (i);
    }
    if (i * i > nb) {
        return (0);
    }
}
