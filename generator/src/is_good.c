/*
** EPITECH PROJECT, 2022
** is_good.c
** File description:
** Function: gen_perfect
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "../include/struct_all.h"
#include "my.h"

int suite_sec_is_good(struc *inf, int y, int x, int tmp)
{
    int no_pass = 0;
    if ((y + 1) >= inf->size_y) {
        no_pass = 1;
        tmp++;
    }
    if (no_pass == 0 && inf->maze[y + 1][x] == 'X')
        tmp++;
    if ((y - 1) < 0) {
        no_pass = 1;
        tmp++;
    }
    if (no_pass == 0 && inf->maze[y - 1][x] == 'X')
        tmp++;
    return tmp;
}

int sec_is_good(struc *inf, int x, int y)
{
    int tmp = 0;
    int no_pass = 0;
    if ((x + 1) >= inf->size_x) {
        no_pass = 1;
        tmp++;
    }
    if (no_pass == 0 && inf->maze[y][x + 1] == 'X')
        tmp++;
    no_pass = 0;
    if ((x - 1) < 0) {
        no_pass = 1;
        tmp++;
    }
    if (no_pass == 0 && inf->maze[y][x - 1] == 'X')
        tmp++;
    tmp = suite_sec_is_good(inf, y, x, tmp);
    return tmp;
}

int add(struc *inf, int tmp, int pos)
{
    tmp++;
    inf->pos_good[pos] = 1;
    return tmp;
}

int is_good(struc *inf, int x, int y)
{
    int tmp = 0;
    if (0 <= (x + 1) && (x + 1) < inf->size_x) {
        if (inf->maze[y][x + 1] == 'X' && sec_is_good(inf, (x + 1), (y)) == 3)
            tmp = add(inf, tmp, 1);
    } if (0 <= (y + 1) && (y + 1) < inf->size_y) {
        if (inf->maze[y + 1][x] == 'X' && sec_is_good(inf, (x), (y + 1)) == 3)
            tmp = add(inf, tmp, 2);
    } if (0 <= (x - 1) && (x - 1) < inf->size_x) {
        if (inf->maze[y][x - 1] == 'X' && sec_is_good(inf, (x - 1), (y)) == 3)
            tmp = add(inf, tmp, 3);
    } if (0 <= (y - 1) && (y - 1) < inf->size_y) {
        if (inf->maze[y - 1][x] == 'X' && sec_is_good(inf, (x), (y - 1)) == 3)
            tmp = add(inf, tmp, 0);
    }
    return tmp;
}
