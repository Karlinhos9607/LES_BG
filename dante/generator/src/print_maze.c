/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** print_maze.c
*/

#include "../include/include.h"

void print_maze(char **maze)
{
    int i = 0;
    int j = 0;

    while (maze[j] != NULL)
        j++;
    while (maze[i] != NULL && i < (j - 1)){
        my_putstr(maze[i]);
        my_putchar('\n');
        i++;
    }
    my_putstr(maze[i]);
}