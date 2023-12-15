/*
** EPITECH PROJECT, 2023
** test float
** File description:
** test all the float
*/

#include "../include/my.h"
#include "../include/sett.h"

char *resize(char *str, int nb)
{
    char *dest = malloc(sizeof(char) * (nb + 1));

    for (int i = 0; i < nb; i ++) {
        dest[i] = str[i];
    }
    dest[nb] = '\0';
    return dest;
}

int invalid_file(char *buff)
{
    int i = 0;
    int nb_l = 0;
    char *nb_lc;
    int ll = 0;
    int nb_c = 1;

    for (; buff[i] != '\n' && buff[i] != '\0'; i ++) {
        if (!my_isnum(buff[i]))
            return 1;
    }
    if (buff[i + 1] == '\0' || buff[i] == '\0')
        return 1;
    nb_lc = resize(buff, i);
    nb_l = my_getnbr(nb_lc);
    free(nb_lc);
    for (nb_c = i + 1; buff[nb_c] != '\n'; nb_c ++);
    for (int j = nb_c; buff[j] == '\n' && buff[j]; ll ++)
        j = j + nb_c - i;
    return (ll == nb_l) ? 0 : 1;
}

static char *remp_num(char *str, int nb)
{
    int taille = my_get_len(nb);

    str[taille + 1] = '\0';
    str[taille] = '\n';
    taille --;
    for (; nb != 0; taille --) {
        str[taille] = (nb % 10) + '0';
        nb = nb / 10;
    }
    return str;
}

char *pat_gen(int size, const char *pat)
{
    char *dest = malloc(sizeof(char) * (my_get_len(size) +
    (size * size) + size + 2));
    int i;
    int y = 0;
    int k = 0;
    int l = my_strlen(pat);

    dest = remp_num(dest, size);
    i = my_strlen(dest);
    for (int j = 0; j < size; j ++) {
        for (k = 0; k < size; k ++) {
            dest[i + (j * size) + k + y] = pat[((j * size) + k) % l];
        }
        dest[i + (j * size) + k + y] = '\n';
        y ++;
    }
    dest[i + (size * size) + size + 2] = '\0';
    return dest;
}

static int error_hundle(const char **argv, carre_t *p, char *buff)
{
    buff = fs_cat_x_bytes(argv[1], buff);
    if (buff == "")
        return 84;
    if (invalid_file(buff))
        return 84;
    if (my_int_array(argv[1], buff, p) == 0)
        return 84;
    free(buff);
    return 0;
}

int main(int argc, char const **argv)
{
    carre_t p;
    char *buff;

    p.x = 0;
    p.c = 0;
    if (argc == 2)
        return error_hundle(argv, &p, buff);
    if (argc == 3) {
        if (argv[2][0] == '\0')
            return 84;
        buff = pat_gen(my_getnbr(argv[1]), argv[2]);
        if (my_int_array("", buff, &p) == 0)
            return 84;
        free(buff);
        return 0;
    }
    return 84;
}
