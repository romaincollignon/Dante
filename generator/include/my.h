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
    void print_maze(struc *inf);

    // gen_imperfect:
    int gen_imperfect(struc *inf);

    // gen_perfect:
    int gen_perfect(struc *inf);

    // Function_gen:
    int my_rand(void);
    int my_tow_rand(void);
    int is_good(struc *inf, int x, int y);

    // Function Moove:
    void moove(struc *inf, int tmp);
    void one_moove(struc *inf);
    void two_moove(struc *inf);
    void three_moove(struc *inf);

    // Moove :
    void moove_up(struc *inf);
    void moove_down(struc *inf);
    void moove_right(struc *inf);
    void moove_left(struc *inf);

    // Verif_error:
    int error_main(int ac, char **av);

#endif /* !MY_H_ */
