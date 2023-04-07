/*
** EPITECH PROJECT, 2022
** moove.c
** File description:
** Function: moove
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "../../include/struct_all.h"
#include "my.h"

void moove_up(struc *inf)
{
    inf->x[inf->pos + 1] = inf->x[inf->pos];
    inf->y[inf->pos + 1] = inf->y[inf->pos] - 1;
    inf->pos++;
    inf->maze[inf->y[inf->pos]][inf->x[inf->pos]] = '.';
}

void moove_do(struc *inf)
{
    inf->x[inf->pos + 1] = inf->x[inf->pos];
    inf->y[inf->pos + 1] = inf->y[inf->pos] + 1;
    inf->pos++;
    inf->maze[inf->y[inf->pos]][inf->x[inf->pos]] = '.';
}

void moove_ri(struc *inf)
{
    inf->x[inf->pos + 1] = inf->x[inf->pos] + 1;
    inf->y[inf->pos + 1] = inf->y[inf->pos];
    inf->pos++;
    inf->maze[inf->y[inf->pos]][inf->x[inf->pos]] = '.';
}

void moove_le(struc *inf)
{
    inf->x[inf->pos + 1] = inf->x[inf->pos] - 1;
    inf->y[inf->pos + 1] = inf->y[inf->pos];
    inf->pos++;
    inf->maze[inf->y[inf->pos]][inf->x[inf->pos]] = '.';
}
