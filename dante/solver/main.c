/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "include.h"

int main(int ac, char **av)
{
    char **exmaze;
    char *buffer = malloc(100);
    int i = 0;
    int j = 0;

    scooby(exmaze);
    while (exmaze[i] != NULL) {
        printf("%s\n", exmaze[i]);
        i++;
    }
}
