/*
** EPITECH PROJECT, 2023
** task02
** File description:
** day09
*/

#ifndef MY_H
    #define MY_H
    #include <stdarg.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <unistd.h>
    #define FSIZE 15

//For printf
int my_printf(const char *format, ...);
int my_put_pourcent(va_list *list, int *total);
int my_put_nbrl(va_list *list, int *total);
int my_put_nbrl2(int nb, int *total);
int my_putcharl(va_list *list, int *total);
int my_putcharl2(char c, int *total);
int my_putstrl(va_list *list, int *total);
int my_putstrl2(char *str, int *total);
int conv_hexa_min(va_list *list, int *total);
int conv_hexa_maj(va_list *list, int *total);
int conv_octal(va_list *list, int *total);
int conv_bin(va_list *list, int *total);
int my_wr_sc(va_list *list, int *total);
int put_pointeur(va_list *list, int *total);
int my_wr_sc(va_list *list, int *total);
int my_wr(double nb, int c, int new_nb, int *total);
int my_put_uns(va_list *list, int *total);
int my_float(va_list *list, int *total);
int my_wr_sc_maj(va_list *list, int *total);
int my_wr_sc_2(double nb, int c, int new_nb, int *total);

//My lib
int my_isupper(char c);
int my_isnum(char c);
int my_isalpha(char c);
int my_isalnum(char c);
int my_islower(char const c);
int my_isprint(char c);
int my_putstr_e(char const *str);
char **my_str_to_word_array(char *str, char c);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char *to_find);
char *my_strupcase(char *str);
int my_swap(int *a, int *b);
int my_get_len(int nb);
char *my_strncat_a(char const *src, int nb);

#endif
