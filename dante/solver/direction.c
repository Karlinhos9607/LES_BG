/*
** EPITECH PROJECT, 2019
** right.c
** File description:
** dante
*/

#include "include.h"

int right(int x, int y, char **tab)
{
    if (y < my_strlenline_intab(tab) && tab[x][y + 1] == '*') {
        return (0);
    }
}

int left(int x, int y, char **tab)
{
    if (y > 0 && tab[x][y - 1] == '*') {
        return (0);
}
}

int up(int x, int y, char **tab)
{
    if (tab[x - 1][y] == '*') {
        return (0);
    }
    if (x < 0 || tab[x - 1][y] == 'X' || tab[x - 1][y] == 'o') {
        return (1);
    }
}

int down(int x, int y, char **tab)
{
    if (tab[x + 1][y] == '*') {
        return (0);
    }
    if (x == my_count_line_in_tab(tab) + 1 || tab[x + 1][y] == 'X' || tab[x + 1][y] == 'o') {
        return (1);
    }
}
