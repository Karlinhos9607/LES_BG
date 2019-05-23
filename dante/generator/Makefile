##
## EPITECH PROJECT, 2018
## makefile
## File description:
## simple makefile
##

SRC	=	src/main.c 			\
		src/my_putchar.c 	\
		src/my_putstr.c 	\
		src/my_strlen.c 	\
		src/add_wall_c.c	\
		src/add_wall_l.c 	\
		src/algo_perfect.c 	\
		src/create_maze.c 	\
		src/error.c 		\
		src/ini_struct.c 	\
		src/make_algo.c 	\
		src/print_maze.c 	\
		src/process.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re