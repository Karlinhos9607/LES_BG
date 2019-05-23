/*
** EPITECH PROJECT, 2019
** count_line_double_tab
** File description:
** minishell1
*/

#include "include.h"

int my_count_line_in_tab(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        i++;
    }
    return (i);
}