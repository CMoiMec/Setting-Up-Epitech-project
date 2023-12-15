/*
** EPITECH PROJECT, 2023
** test float
** File description:
** test all the float
*/

#include "../include/my.h"
#include "../include/sett.h"

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        my_putstr_e("FAILURE\n");
    return fd;
}

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int r = read(fd, buffer, size);

    if (r == -1)
        my_putstr_e("read failed\n");
    if (r == 0)
        my_putstr_e("read has nothing more to read\n");
    if (r < size)
        my_putstr_e("read didn’t complete the entire buffer\n");
    return;
}

char *fs_cat_x_bytes(char const *filepath, char *buff)
{
    struct stat buff1;
    int fd = fs_open_file(filepath);
    int r;

    if (lstat(filepath, &buff1) == -1 || fd == -1) {
        buff = malloc(sizeof(char) * (2));
        fs_understand_return_of_read(fd, buff, buff1.st_size);
        buff = "";
        return buff;
    }
    buff = malloc(sizeof(char) * (buff1.st_size + 1));
    fs_understand_return_of_read(fd, buff, buff1.st_size);
    buff[buff1.st_size] = '\0';
    return buff;
}
