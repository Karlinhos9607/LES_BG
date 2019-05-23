/*
** EPITECH PROJECT, 2019
** IIII
** File description:
** I
*/

#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int my_strlenline_intab(char **tab);
int main(int ac, char **av);
char **scooby(char **tab);
int right(int x, int y, char **tab);
int left(int x, int y, char **tab);
int up(int x, int y, char **tab);
int down(int x, int y, char **tab);
int my_count_line_in_tab(char **tab);
