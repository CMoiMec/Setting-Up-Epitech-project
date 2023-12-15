/*
** EPITECH PROJECT, 2023
** test float
** File description:
** test all the float
*/

#include "../include/my.h"
#include "../include/sett.h"

static char *square_print(int *l, int c, int i, char *str)
{
    for (int y = 0; y < c; y ++) {
        for (int x = 0; x < c; x ++) {
            str[i + x + (l[2] * y)] = 'x';
        }
    }
    return str;
}

int carre_test(int *l, int c, int i, char *str)
{
    int t = 1;

    if (l[1] + c > l[0] || (i - (l[1] * l[2])) + c >= l[2]) {
        return 0;
    }
    for (int y = 0; y < c && t == 1; y ++) {
        for (int x = 0; x < c && t == 1; x ++) {
            t = (str[i + x + (l[2] * y)] == 'o') ? 0 : t;
        }
    }
    return t;
}

void search_square(carre_t *p, int *l, int i, char *str)
{
    int c = p->c;

    for (c; carre_test(l, c, i, str) == 1 && c <= (l[0] - l[1]); c++);
    c = c - 1;
    if (c > p->c) {
        p->x = i;
        p->c = c;
    }
    return;
}

static int split(char *str, carre_t *p, int *l, int i)
{
    if (str[i] == '.')
        search_square(p, l, i, str);
    l[1] += (str[i] == '\n') ? 1 : 0;
    if (str[i] == 'o')
        return 0;
    if (str[i] != 'o' && str[i] != '\n' && str[i] != '.' && str[i] != '\0') {
        return 1;
    }
    return 0;
}

int my_int_array(const char *filepath, char *str, carre_t *p)
{
    struct stat buff1;
    int l[] = {0, 0, 0};
    int a = 0;

    for (a --; str[0] != '\n'; str ++)
        a --;
    str ++;
    a = (lstat(filepath, &buff1) == -1 ) ? my_strlen(str) : a + buff1.st_size;
    for (int i = 0; str[i] != '\0'; i ++) {
        if (l[0] == 0)
            l[2] ++;
        if (str[i] == '\n')
            l[0] ++;
    }
    for (int i = 0; str[i] != '\0'; i ++) {
        if (split(str, p, l, i))
            return 0;
    }
    return write(1, square_print(l, p->c, p->x, str), a);
}
