/*
** EPITECH PROJECT, 2023
** task04
** File description:
** day05
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 1) {
        return (nb);
    }
    if (p == 0){
        return (1);
    } else if (p < 0) {
        return (0);
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
