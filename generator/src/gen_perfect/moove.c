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
#include <time.h>

#include "../../include/struct_all.h"
#include "my.h"

void one_moove(struc *inf)
{
    if (inf->pos_good[0] == 1) {
        moove_up(inf);
    } if (inf->pos_good[1] == 1) {
        moove_right(inf);
    } if (inf->pos_good[2] == 1) {
        moove_down(inf);
    } if (inf->pos_good[3] == 1) {
        moove_left(inf);
    }
}

void reset_pos(struc *inf)
{
    inf->pos_good[0] = 0;
    inf->pos_good[1] = 0;
    inf->pos_good[2] = 0;
    inf->pos_good[3] = 0;
}

void moove(struc *inf, int tmp)
{
    if (tmp == 1)
        one_moove(inf);
    if (tmp == 2)
        two_moove(inf);
    if (tmp == 3)
        three_moove(inf);
    return reset_pos(inf);
}
