/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** add_wall_c.c
*/

#include "../include/include.h"

char **add_wall_c(dante_t *dante, char **maze, int c)
{
    int i = 0;

    while (maze[c][i] != '\0') {
        maze[c][i] = 'X';
        i++;
    }
    return (maze);
}