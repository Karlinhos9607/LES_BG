/*
** EPITECH PROJECT, 2018
** CPE_dante_2018
** File description:
** main fonction
*/

#include "../include/include.h"

int main(int ac, char **av)
{
    dante_t dante;

    if (error(ac, av) == 1)
        return (84);
    ini_struct(&dante, av);
    process(&dante);
    return (0);
}