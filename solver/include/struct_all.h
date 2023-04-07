/*
** EPITECH PROJECT, 2022
** struct_menu.h
** File description:
** struct for all game
*/

#ifndef STRUCT_MENU_H
    #define STRUCT_MENU_H


    typedef struct inf {
        char **cp_maze;
        char **maze;
        int size_x;
        int size_y;
        int pos;
        int *x;
        int *y;
        int *possi;
    } struc;

#endif /* !STRUCT_MENU_H */
