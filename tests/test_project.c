/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_dure, .init = redirect_all_std)
{
    my_printf("Hello world");
    cr_assert_stdout_eq_str("Hello world") ;
}

Test(my_printf, simple_d, .init = redirect_all_std)
{
    my_printf("%d", 3499);
    cr_assert_stdout_eq_str("3499") ;
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("%s", "coucou");
    cr_assert_stdout_eq_str("coucou") ;
}

Test(my_printf, simple_char, .init = redirect_all_std)
{
    my_printf("%c", 'Z');
    cr_assert_stdout_eq_str("Z") ;
}

Test(my_printf, simple_hexa_min, .init = redirect_all_std)
{
    my_printf("%x", 3499);
    cr_assert_stdout_eq_str("dab") ;
}

Test(my_printf, simple_hexa_maj, .init = redirect_all_std)
{
    my_printf("%X", 3499);
    cr_assert_stdout_eq_str("DAB") ;
}

Test(my_printf, pourcent, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, simple_octal, .init = redirect_all_std)
{
    my_printf("%o", 3499);
    cr_assert_stdout_eq_str("6653") ;
}

Test(my_printf, simple_binaire, .init = redirect_all_std)
{
    my_printf("%b", 3499);
    cr_assert_stdout_eq_str("110110101011") ;
}

Test(my_printf, simple_int, .init = redirect_all_std)
{
    my_printf("%i", 3499);
    cr_assert_stdout_eq_str("3499") ;
}

Test(my_printf, complexe_test, .init = redirect_all_std)
{
    my_printf("coucou %s %b suce mon gros zeub %c\n", "les tek1", 3499, 'c');
    cr_assert_stdout_eq_str("coucou les tek1 110110101011 suce mon gros zeub c\n");
}
