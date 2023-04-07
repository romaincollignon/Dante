/*
** EPITECH PROJECT, 2022
** g_perfect.c
** File description:
** Function: gen_perfect
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "../include/struct_all.h"
#include "my.h"

int my_tow_rand(void)
{
    return (rand() % 2 + 1);
}

int my_rand(void)
{
    return (rand() % 3 + 1);
}
