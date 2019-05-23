/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** add_wall_l.c
*/

#include "../include/include.h"

char **add_wall_l(dante_t *dante, char **maze, int c)
{
    int i = 0;

    while (maze[i] != NULL) {
        maze[i][c] = 'X';
        i++;
    }
    return (maze);
}