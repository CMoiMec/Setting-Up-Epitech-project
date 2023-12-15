/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#include "my.h"

static void split1(double *nb, int *neg2, int *c, int *neg)
{
    if (*nb < 0.0) {
        *neg = 1;
        *nb = -* nb;
    }
    if (*nb >= 1.0) {
        while (*nb >= 10.0) {
            *nb = *nb / 10.0;
            *c = *c + 1;
        }
    } else {
        *neg2 = 1;
        while (*nb > 0.0 && *nb < 1.0) {
            *nb = *nb * 10.0;
            *c = *c + 1;
        }
    }
    return;
}

static void split2(int *new_nb, int *taille, int *taille_p, int c)
{
    if ((((*new_nb % 100) - (*new_nb % 10)) / 10) > 4)
        *new_nb = *new_nb + 100;
    *new_nb = *new_nb / 10;
    *taille = my_get_len(*new_nb);
    *taille_p = my_get_len(c);
    if (*taille_p == 1)
        *taille_p = *taille_p + 1;
    return;
}

static void split3(int taille, int neg, int *new_nb, char *hex)
{
    if (neg)
        hex[0] = '-';
    for (int i = neg; i < (7 + neg); i ++) {
        if (i == neg){
            hex[i] = '0' +
                (*new_nb / my_compute_power_rec(10, taille - i - (!neg)));
            *new_nb = *new_nb % my_compute_power_rec(10, taille - i - (!neg));
            hex[1 + neg] = '.';
        } else {
            hex[i + 1] = '0' +
                (*new_nb / my_compute_power_rec(10, taille - i - (!neg)));
            *new_nb = *new_nb % my_compute_power_rec(10, taille - i - (!neg));
        }
    }
    hex[8 + neg] = 'E';
    return;
}

static void split4(int neg, int neg2, char *hex)
{
    if (neg2) {
        hex[9 + neg] = '-';
    } else {
        hex[9 + neg] = '+';
    }
    return;
}

static char *split5(int taille_p, int neg, int c, char *hex)
{
    for (int i = 0; i < (taille_p); i++) {
        hex[10 + neg +i] = '0' +
        (c / my_compute_power_rec(10, taille_p - i - 1));
        c = c % my_compute_power_rec(10, taille_p - i - 1);
    }
    hex[10 + taille_p + neg] = '\0';
    return (hex);
}

int my_wr(double nb, int c, int new_nb, int *total)
{
    int taille = 0;
    char *hex;
    int taille_p = 0;
    int neg = 0;
    int neg2 = 0;

    if (nb == 0.0) {
        my_putstrl2("0.000000E+00", total);
        return (12);
    }
    split1(&nb, &neg2, &c, &neg);
    for (int i = 0; i != 8; i ++)
        nb = nb * 10;
    new_nb = (int)nb;
    split2(&new_nb, &taille, &taille_p, c);
    hex = malloc(sizeof(char) * (11 + taille_p + neg));
    split3(taille, neg, &new_nb, hex);
    split4(neg, neg2, hex);
    my_putstrl2(split5(taille_p, neg, c, hex), total);
    return (12 + neg);
}

int my_wr_sc_maj(va_list *list, int *total)
{
    my_wr(va_arg(*list, double), 0, 0, total);
    return (0);
}
