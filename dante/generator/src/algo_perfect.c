/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** algo_perfect.c
*/

#include "../include/include.h"

char **change_maze(dante_t *dante, char **maze)
{
    int i = 1;
    int j = 1;

    while (i < dante->nb_l - 1) {
        maze = add_wall_c(dante, maze, i);
        i = i + 2;
    }
    while (j < dante->nb_c - 1) {
        maze = add_wall_l(dante, maze, j);
        j = j + 2;
    }
    return (maze);
}

char **alloc_maze_perfect(dante_t *dante)
{
    int i = 0;
    int j = 0;
    char **maze = malloc(sizeof(char *) * dante->nb_l + 1);

    while (i < dante->nb_l) {
        maze[i] = malloc(sizeof(char) * dante->nb_c + 1);
        while (j < dante->nb_c) {
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

char **algo_perfect(dante_t *dante)
{
    char **maze = alloc_maze_perfect(dante);

    srand(time(NULL));
    maze = change_maze(dante, maze);
    maze = make_algo(dante, maze);
    return (maze);
}