/*
** EPITECH PROJECT, 2022
** moove_map.c
** File description:
** Function moove: up, down, right, left
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "../../include/struct_all.h"
#include "my.h"

void moove_up(struc *inf)
{
    inf->tmp_x++;
    inf->tmp_y++;
    inf->x[inf->tmp_x] = inf->x[inf->tmp_x - 1];
    inf->y[inf->tmp_y] = (inf->y[inf->tmp_y - 1] - 1);
    inf->maze[inf->y[inf->tmp_y]][inf->x[inf->tmp_x]] = '*';
}

void moove_down(struc *inf)
{
    inf->tmp_x++;
    inf->tmp_y++;
    inf->x[inf->tmp_x] = (inf->x[inf->tmp_x - 1]);
    inf->y[inf->tmp_y] = (inf->y[inf->tmp_y - 1] + 1);
    inf->maze[inf->y[inf->tmp_y]][inf->x[inf->tmp_x]] = '*';
}

void moove_right(struc *inf)
{
    inf->tmp_x++;
    inf->tmp_y++;
    inf->x[inf->tmp_x] = (inf->x[inf->tmp_x - 1] + 1);
    inf->y[inf->tmp_y] = inf->y[inf->tmp_y - 1];
    inf->maze[inf->y[inf->tmp_y]][inf->x[inf->tmp_x]] = '*';
}

void moove_left(struc *inf)
{
    inf->tmp_x++;
    inf->tmp_y++;
    inf->x[inf->tmp_x] = (inf->x[inf->tmp_x - 1] - 1);
    inf->y[inf->tmp_y] = inf->y[inf->tmp_y - 1];
    inf->maze[inf->y[inf->tmp_y]][inf->x[inf->tmp_x]] = '*';
}
