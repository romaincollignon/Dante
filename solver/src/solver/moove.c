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

int add(struc *inf, int tmp, int pos)
{
    tmp++;
    inf->possi[pos] = 1;
    return tmp;
}

int verif_moove(struc *inf)
{
    int tmp = 0;
    if ((inf->y[inf->pos] - 1) > -1) {
        if (inf->maze[inf->y[inf->pos] - 1][inf->x[inf->pos]] == '*')
            tmp = add(inf, tmp, 0);
    }
    if ((inf->y[inf->pos] + 1) < inf->size_y) {
        if (inf->maze[inf->y[inf->pos] + 1][inf->x[inf->pos]] == '*')
            tmp = add(inf, tmp, 2);
    }
    if ((inf->x[inf->pos] - 1) > -1) {
        if (inf->maze[inf->y[inf->pos]][inf->x[inf->pos] - 1] == '*')
            tmp = add(inf, tmp, 3);
    }
    if ((inf->x[inf->pos] + 1) < inf->size_x) {
        if (inf->maze[inf->y[inf->pos]][inf->x[inf->pos] + 1] == '*')
            tmp = add(inf, tmp, 1);
    }
    return tmp;
}

void deplacement(struc *inf)
{
    if ((inf->y[inf->pos] - 1) > -1) {
        if (inf->maze[inf->y[inf->pos] - 1][inf->x[inf->pos]] == '*')
            return moove_up(inf);
    }
    if ((inf->x[inf->pos] + 1) < inf->size_x) {
        if (inf->maze[inf->y[inf->pos]][inf->x[inf->pos] + 1] == '*')
            return moove_ri(inf);
    }
    if ((inf->y[inf->pos] + 1) < inf->size_y) {
        if (inf->maze[inf->y[inf->pos] + 1][inf->x[inf->pos]] == '*')
            return moove_do(inf);
    }
    if ((inf->x[inf->pos] - 1) > -1) {
        if (inf->maze[inf->y[inf->pos]][inf->x[inf->pos] - 1] == '*')
            return moove_le(inf);
    }
}

int moove(struc *inf)
{
    int nb_possi = verif_moove(inf);
    if (nb_possi == 0) {
        if (inf->pos == 0)
            return -1;
        inf->maze[inf->y[inf->pos]][inf->x[inf->pos]] = 'X';
        inf->pos--;
    }
    deplacement(inf);
    return 0;
}
