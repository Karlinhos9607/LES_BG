/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** make_algo.c
*/

#include "../include/include.h"

char **make_algo3(dante_t *dante, char **maze, int i, int j)
{
    int rdm = 0;

    rdm = rand() % 2 + 1;
    if (rdm == 1) {
        maze[i - 1][j] = '*';
        return (maze);
    }
    if (rdm == 2) {
        maze[i][j - 1] = '*';
        return (maze);
    }
    return (maze);
}

char **make_algo2(dante_t *dante, char **maze, int i, int j)
{
    int rdm = 0;

    if (maze[i][j] == '*') {
        if (i == 0) {
            maze[i][j - 1] = '*';
            return (maze);
        }
        if (j == 0)
            maze[i - 1][j] = '*';
        if (maze[i - 1][j] == 'X' && maze[i][j - 1] == 'X')
            maze = make_algo3(dante, maze, i , j);
    }
    return (maze);
}

char **make_algo(dante_t *dante, char **maze)
{
    int i = 0;
    int j = 0;

    while (i < dante->nb_l) {
        while (j < dante->nb_c) {
            maze = make_algo2(dante, maze, i, j);
            j++;
        }
        j = 0;
        i = i + 2;
    }
    return (maze);
}