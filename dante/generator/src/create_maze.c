/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** create_maze.c
*/

#include "../include/include.h"

char **alloc_maze(int nb_l, int nb_c)
{
    char **maze = malloc(sizeof(char *) * nb_l + 1);
    int i = 0;
    int j = 0;

    while (i < nb_l) {
        maze[i] = malloc(sizeof(char) * nb_c + 1);
        while (j < nb_c) {
            maze[i][j] = '*';
            j++;
        }
        maze[i][j] = '\0';
        j = 0;
        i++;
    }
    maze[i] = NULL;
    return (maze);
}

char **create_maze(dante_t *dante, int nb_l, int nb_c)
{
    char **res = algo_perfect(dante);
    //char **maze = alloc_maze(nb_l, nb_c);

    if (dante->p == 1) {
        if (dante->nb_l % 2 == 0 && dante->nb_c % 2 == 0)
            res[dante->nb_l - 2][dante->nb_c - 1] = 'X';
    }
    return (res);
}