/*
** EPITECH PROJECT, 2019
** scooby
** File description:
** dante
*/

#include "include.h"
#include <stdbool.h>

char **scooby(char **tab)
{
    int x = 0;
    int y = 0;
    int xmax = my_count_line_in_tab(tab);
    int ymax = my_strlenline_intab(tab);
    int var1 = 0;
    tab[x][y] = 'o';

    while (x != xmax || y != ymax) {
    if (var1 == 0 && right(x, y, tab) == 0) {
        var1 = 1;
        y++;
        tab[x][y] = 'o';
    }
    if (var1 == 0 && down(x, y, tab) == 0) {
        var1 = 1;
        x++;
        tab[x][y] = 'o';
    }
    if (var1 == 0 && up(x, y, tab) == 0) {
        var1 = 1;
        x--;
        tab[x][y] = 'o';
    }
    
    if (var1 == 0 && left(x, y, tab) == 0) {
        var1 = 1; 
        y--;
        tab[x][y] = 'o';
    }
    var1 = 0;
}
return (tab);
}