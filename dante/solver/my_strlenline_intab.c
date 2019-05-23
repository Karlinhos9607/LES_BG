/*
** EPITECH PROJECT, 2019
** my_strlenlinetab
** File description:
** dante
*/

#include "include.h"

int my_strlenline_intab(char **tab)
{
    int i = 0;
    int j = 0;

    while (tab[i][j] != '\0') {
        j++;
    }
    return (j);
}