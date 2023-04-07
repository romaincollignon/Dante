/*
** EPITECH PROJECT, 2022
** solver.c
** File description:
** Function: solver
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "../../include/struct_all.h"
#include "my.h"

int start_solver(struc *inf)
{
    while (1) {
        if (moove(inf) == -1)
            return -1;
        if (inf->y[inf->pos] == (inf->size_y - 1) &&
            inf->x[inf->pos] == (inf->size_x - 1))
            return 0;
        for (int n = 0; n < 4; n++)
            inf->possi[n] = 0;
    }
    return 0;
}

int solver(struc *inf)
{
    inf->x = malloc(sizeof(int) * (inf->size_y * inf->size_x));
    inf->y = malloc(sizeof(int) * (inf->size_y * inf->size_x));
    inf->x[0] = 0;
    inf->y[0] = 0;
    if (inf->size_x == 1 && inf->size_y == 1 && inf->maze[0][0] == '*') {
        return 0;
    }
    inf->possi = malloc(sizeof(int) * 5);
    for (int n = 0; n < 4; n++)
        inf->possi[n] = 0;
    if (inf->maze[0][0] == 'X')
        return -1;
    if (inf->maze[inf->size_y - 1][inf->size_x - 1] == 'X')
        return -1;
    if (start_solver(inf) == -1)
        return -1;
    for (int n = 0; n <= inf->pos; n++) {
        inf->maze[inf->y[n]][inf->x[n]] = 'o';
    }
    return 0;
}
