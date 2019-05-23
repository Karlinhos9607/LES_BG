/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** process.c
*/

#include "../include/include.h"

void process(dante_t *dante)
{
    dante->maze = create_maze(dante, dante->nb_l, dante->nb_c);
    print_maze(dante->maze);
}