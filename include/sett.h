/*
** EPITECH PROJECT, 2023
** task02
** File description:
** day09
*/

#pragma once
#include <sys/stat.h>
#include <fcntl.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

typedef struct carre_s {
    int x;
    int c;
} carre_t;

char *fs_cat_x_bytes(char const *filepath, char *buff);
char **my_str_array(char *str, char c);
int my_int_array(const char *filepath, char *str, carre_t *p);
