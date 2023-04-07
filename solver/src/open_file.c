/*
** EPITECH PROJECT, 2022
** open_file.c
** File description:
** Function: open_file
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

#include "../include/struct_all.h"
#include "my.h"

int verif_maze(struc *inf)
{
    for (inf->size_y = 0; inf->maze[inf->size_y] != NULL; inf->size_y++);
    for (inf->size_x = 0; inf->maze[0][inf->size_x] != '\0';
        inf->size_x++);
    int x = 0;
    for (int y = 0; y < inf->size_y; y++) {
        for (; inf->maze[y][x] != '\0'; x++);
        if (x != inf->size_x)
            return 84;
        x = 0;
    }
    return 0;
}

int open_file(char *av[], struc *inf)
{
    struct stat st;
    stat(av[1], &st);
    char *file = malloc(sizeof(char) * (st.st_size + 1));
    int fd = open(av[1], O_RDONLY);
    if (fd == -1 || !st.st_size)
        return (fd == -1) ? 84 : 1;
    read(fd, file, st.st_size);
    file[st.st_size] = '\0';
    close(fd);
    inf->maze = my_str_to_word_array(file, "\n");
    inf->cp_maze = my_str_to_word_array(file, "\n");
    if (verif_maze(inf) == 84)
        return 84;
    for (int a = 0; file[a] != '\0'; a++)
        if (file[a] != 'X' && file[a] != '*' && file[a] != '\n')
            return 84;
    return 0;
}
