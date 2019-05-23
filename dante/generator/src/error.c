/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** error.c
*/

#include "../include/include.h"

int error(int ac, char **av)
{
    if (ac < 3) {
        write(2, "Error: Invalid argument", 24);
        return (1);
    }
    for (int i = 0; av[2][i]; i++) {
        if (av[2][i] > '9' || av[2][i] < '0') {
            write(2, "Error: argument must be a number", 33);
            return (1);
        }
    }
    for (int j = 0; av[1][j]; j++) {
        if (av[1][j] > '9' || av[1][j] < '0') {
            write(2, "Error: argument must be a number", 33);
            return (1);
        }
    }
    return (0);
}