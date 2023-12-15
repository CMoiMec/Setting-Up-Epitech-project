/*
** EPITECH PROJECT, 2023
** task06
** File description:
** day05
*/

int my_is_prime(int nb)
{
    for (int i = 2; i < (nb / 2) + 1; i ++) {
        if (nb % i == 0) {
            return (0);
        }
    }
    return (1);
}
