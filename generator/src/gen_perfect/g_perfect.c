/*
** EPITECH PROJECT, 2022
** g_perfect.c
** File description:
** Function: gen_perfect
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "../../include/struct_all.h"
#include "my.h"

void deplac(struc *inf)
{
    int tmp = is_good(inf, inf->tmp_x[inf->x], inf->tmp_y[inf->y]);
    if (tmp == 0) {
        inf->tmp_x--;
        inf->tmp_y--;
        return;
    }
    moove(inf, tmp);
}

int finish_leave(struc *inf)
{
    int x = inf->size_x - 1;
    int y = inf->size_y - 1;
    if (inf->maze[y][x] == '*')
        return 0;
    inf->maze[y][x] = '*';
    y--;
    while (x > -1) {
        if (inf->maze[y][x] == 'X') {
            inf->maze[y][x] = '*';
        } else {
            return 0;
        }
        if (inf->maze[y][x - 1] == 'X') {
            inf->maze[y][x - 1] = '*';
        } else {
            return 0;
        }
        x--;
        y--;
    } return 0;
}

int gen_perfect(struc *inf)
{
    if (inf->size_x == 1 && inf->size_y == 1) {
        inf->maze[0][0] = '*';
        return 1;
    }
    inf->maze[0][0] = '*';
    srand(time(NULL));
    int tmp_start = (rand() % 3);
    if (tmp_start == 1) {
        inf->x[1] = 1;
        inf->y[1] = 0;
    } else {
        inf->x[1] = 1;
        inf->y[1] = 0;
    } inf->maze[inf->y[1]][inf->x[1]] = '*';
    while (inf->tmp_x != 0 && inf->tmp_y != 0)
        deplac(inf);
    return finish_leave(inf);
}
