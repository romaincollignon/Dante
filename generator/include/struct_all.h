/*
** EPITECH PROJECT, 2022
** struct_menu.h
** File description:
** struct for all game
*/

#ifndef INF
    #define INF

    typedef struct inf {
        char **maze;
        int size_x;
        int size_y;
        int *x;
        int *y;
        int tmp_x;
        int tmp_y;
        int tmp;
        int *pos_good;
    } struc;

#endif /* !INF */
