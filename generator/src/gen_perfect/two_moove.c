/*
** EPITECH PROJECT, 2022
** two_moove.c
** File description:
** Function: two_moove
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "../../include/struct_all.h"
#include "my.h"

void moove_tw_droit(struc *inf, int pos)
{
    int tmp = my_tow_rand();
    if (pos == 0) {
        if (tmp == 1)
            moove_up(inf);
        if (tmp == 2)
            moove_down(inf);
    } else {
        if (tmp == 1)
            moove_right(inf);
        if (tmp == 2)
            moove_left(inf);
    }
}

void moove_tw_cot_right(struc *inf, int pos)
{
    int tmp = my_tow_rand();
    if (pos == 0) {
        if (tmp == 1)
            moove_left(inf);
        if (tmp == 2)
            moove_up(inf);
    } else {
        if (tmp == 1)
            moove_right(inf);
        if (tmp == 2)
            moove_down(inf);
    }
}

void moove_tw_cot_left(struc *inf, int pos)
{
    int tmp = my_tow_rand();
    if (pos == 0) {
        if (tmp == 1)
            moove_right(inf);
        if (tmp == 2)
            moove_up(inf);
    } else {
        if (tmp == 1)
            moove_left(inf);
        if (tmp == 2)
            moove_down(inf);
    }
}

void two_moove(struc *inf)
{
    if (inf->pos_good[0] == 1) {
        if (inf->pos_good[2] == 1)
            moove_tw_droit(inf, 0);
        if (inf->pos_good[3] == 1)
            moove_tw_cot_right(inf, 0);
        if (inf->pos_good[1] == 1)
            moove_tw_cot_left(inf, 0);
    }
    if (inf->pos_good[2] == 1) {
        if (inf->pos_good[1] == 1)
            moove_tw_cot_right(inf, 1);
        if (inf->pos_good[3] == 1)
            moove_tw_cot_left(inf, 1);
    }
    if (inf->pos_good[1] == 1 && inf->pos_good[3] == 1) {
        moove_tw_droit(inf, 1);
    }
    return;
}
