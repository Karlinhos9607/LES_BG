/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2018
** File description:
** include
*/

#ifndef INCLUDE_H
#define INCLUDE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>

typedef struct dante_s dante_t;
struct dante_s {
	char **maze;
	int nb_l;
	int nb_c;
	int p;
};

typedef struct pos_s pos_t;
struct pos_s {
	int x;
	int y;
};

typedef struct alg_s alg_t;
struct alg_s {
	int x;
	int y;
	int a;
	int b;
};

void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
void find_minus(char const *str, int *minus, int *j);
char **create_maze(dante_t *dante, int nb_l, int nb_c);
char **alloc_maze(int nb_l, int nb_c);
void print_maze(char **maze);
void ini_struct(dante_t *dante, char **av);
void process(dante_t *dante);
int error(int ac, char **av);
//----------- algo perfect
char **algo_perfect(dante_t *dante);
char **alloc_maze_perfect(dante_t *dante);
char **make_algo(dante_t *dante, char **maze);
char **make_algo2(dante_t *dante, char **maze, int i, int j);
char **make_algo3(dante_t *dante, char **maze, int i, int j);
char **add_wall_c(dante_t *dante, char **maze, int c);
char **add_wall_l(dante_t *dante, char **maze, int c);

#endif