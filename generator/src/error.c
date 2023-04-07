/*
** EPITECH PROJECT, 2022
** error.c
** File description:
** Function: error_main
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "../include/struct_all.h"
#include "my.h"

int verif_gen_perfect(char **av)
{
    if (av[3][0] == 'p' && av[3][1] == 'e' && av[3][2] == 'r' &&
    av[3][3] == 'f' && av[3][4] == 'e' && av[3][5] == 'c' &&
    av[3][6] == 't' && av[3][7] == '\0')
        return 2;
    return 84;
}

int error_main(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return 84;
    for (int n = 0; av[1][n] != '\0'; n++) {
        if (av[1][n] < '0' || av[1][n] > '9')
            return 84;
    }
    for (int n = 0; av[2][n] != '\0'; n++) {
        if (av[2][n] < '0' || av[2][n] > '9')
            return 84;
    }
    if (ac == 3)
        return 1;
    if (ac == 4)
        return verif_gen_perfect(av);
    return 84;
}
