/*
** EPITECH PROJECT, 2022
** three_moove.c
** File description:
** Function: three_moove
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "../../include/struct_all.h"
#include "my.h"

void moove_no_up(struc *inf)
{
    int tmp = my_rand();
    if (tmp == 1)
        moove_right(inf);
    if (tmp == 2)
        moove_down(inf);
    if (tmp == 3)
        moove_left(inf);
}

void moove_no_do(struc *inf)
{
    int tmp = my_rand();
    if (tmp == 1)
        moove_right(inf);
    if (tmp == 2)
        moove_up(inf);
    if (tmp == 3)
        moove_left(inf);
}

void moove_no_ri(struc *inf)
{
    int tmp = my_rand();
    if (tmp == 1)
        moove_up(inf);
    if (tmp == 2)
        moove_down(inf);
    if (tmp == 3)
        moove_left(inf);
}

void moove_no_le(struc *inf)
{
    int tmp = my_rand();
    if (tmp == 1)
        moove_right(inf);
    if (tmp == 2)
        moove_down(inf);
    if (tmp == 3)
        moove_up(inf);
}

void three_moove(struc *inf)
{
    if (inf->pos_good[0] == 0)
        moove_no_up(inf);
    if (inf->pos_good[1] == 0)
        moove_no_ri(inf);
    if (inf->pos_good[2] == 0)
        moove_no_do(inf);
    if (inf->pos_good[3] == 0)
        moove_no_le(inf);
}
