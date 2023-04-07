/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main -> mini_shell
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "../include/struct_all.h"
#include "my.h"

void suite_init(struc *inf)
{
    inf->maze = malloc(sizeof(char *) * (inf->size_y + 1));
    for (int n = 0; n < inf->size_y; n++) {
        inf->maze[n] = malloc(sizeof(char) * (inf->size_x + 1));
        for (int i = 0; i < inf->size_x; i++)
            inf->maze[n][i] = 'X';
        inf->maze[n][inf->size_x] = '\0';
    }
    inf->maze[inf->size_y] = NULL;
    inf->x = malloc(sizeof(int) * (inf->size_x * inf->size_y));
    inf->y = malloc(sizeof(int) * (inf->size_x * inf->size_y));
    inf->x[0] = 0;
    inf->y[0] = 0;
    inf->tmp_x = 1;
    inf->tmp_y = 1;
    inf->tmp = 0;
    inf->pos_good = malloc(sizeof(int) * 5);
}

int init(struc *inf, char **av)
{
    inf->size_x = my_getnbr(av[1]);
    inf->size_y = my_getnbr(av[2]) + 1;
    if (inf->size_x == 0)
        return 0;
    if (inf->size_y == 0)
        return 0;
    suite_init(inf);
    return 1;
}

void print_maze(struc *inf)
{
    for (int n = 0; n < inf->size_y - 2; n++) {
        mini_printf("%s", inf->maze[n]);
        mini_printf("\n");
    }
    mini_printf("%s", inf->maze[inf->size_y - 2]);
}

int main(int ac, char **av)
{
    int tmp = error_main(ac, av);
    if (tmp == 84)
        return 84;
    struc *inf = malloc(sizeof(struc));
    if (init(inf, av) == 0)
        return 0;
    for (int n = 0; n < 4; n++)
        inf->pos_good[n] = 0;
    if (tmp == 1) {
        gen_imperfect(inf);
        print_maze(inf);
        return 0;
    }
    if (tmp == 2) {
        gen_perfect(inf);
        print_maze(inf);
        return 0;
    } else {
        return 84;
    }
}
