/*
** EPITECH PROJECT, 2023
** test float
** File description:
** test all the float
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(My_Float, float_normal, .init = redirect_all_std)
{
    my_printf("My %f test", 332.32);
    cr_assert_stdout_eq_str("My 332.320000 test");
}

Test(My_Float, float_below_zero, .init = redirect_all_std)
{
    my_printf("My %f test", -5.32);
    cr_assert_stdout_eq_str("My -5.320000 test");
}