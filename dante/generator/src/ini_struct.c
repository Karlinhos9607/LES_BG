/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** ini_struct.c
*/

#include "../include/include.h"

void ini_struct(dante_t *dante, char **av)
{
    int i = 3;

    dante->nb_l = atoi(av[1]);
    dante->nb_c = atoi(av[2]);
    dante->p = 0;
    if (av[3] != NULL) {
        i = strcmp(av[3], "perfect");
        if (i == 0)
            dante->p = 1;
    }
}