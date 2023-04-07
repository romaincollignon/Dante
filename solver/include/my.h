/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** all prototypes and include
*/

#ifndef MY_H_
    #define MY_H_
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>

    #include "struct_all.h"
    #include "my.h"

    // Function:
    int mini_printf(const char *format, ...);
    int	my_getnbr(char const *str);
    char **my_str_to_word_array(char *tab, char *sep);

    // Function open_file:
    int open_file(char *av[], struc *inf);

    // Moove:
    int moove(struc *inf);
    void moove_up(struc *inf);
    void moove_do(struc *inf);
    void moove_ri(struc *inf);
    void moove_le(struc *inf);

    // Solver:
    int solver(struc *inf);
    void print_maze(struc *inf);

#endif /* !MY_H_ */
