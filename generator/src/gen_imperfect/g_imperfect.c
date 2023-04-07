/*
** EPITECH PROJECT, 2022
** g_imperfect.c
** File description:
** Function: gen_imperfect
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "../../include/struct_all.h"
#include "my.h"

void edit_map_imperfect(struc *inf)
{
    int tmp_x = 0;
    int tmp_y = 0;
    int tmp = 0;
    while (tmp < ((inf->size_x + inf->size_y) / 2)) {
        tmp_x = (rand() % inf->size_x);
        tmp_y = (rand() % inf->size_y);
        if (inf->maze[tmp_y][tmp_x] == 'X') {
            inf->maze[tmp_y][tmp_x] = '*';
            tmp++;
        }
    }
    return;
}

int gen_imperfect(struc *inf)
{
    gen_perfect(inf);
    edit_map_imperfect(inf);
    return 0;
}
