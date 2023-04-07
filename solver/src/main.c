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

void print_maze(struc *inf)
{
    for (int n = 0; n <= inf->pos; n++) {
        inf->cp_maze[inf->y[n]][inf->x[n]] = 'o';
    }
    int n = 0;
    for (; n < inf->size_y - 1; n++) {
        mini_printf("%s", inf->cp_maze[n]);
        mini_printf("\n");
    }
    mini_printf("%s", inf->cp_maze[n]);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    struc *inf = malloc(sizeof(struc));
    inf->pos = 0;
    int tmp = open_file(av, inf);
    if (tmp == 84)
        return 84;
    if (tmp == 1)
        return 0;
    if (solver(inf) == -1) {
        mini_printf("no solution found");
        return 0;
    }
    print_maze(inf);
    return 0;
}
