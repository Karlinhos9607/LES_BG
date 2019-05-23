##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	main.c					\
		direction.c				\
		my_count_line_in_tab.c	\
		scooby.c				\
		my_strlenline_intab.c	\


OBJ		=	$(SRC:.c=.o)

CC		=	cc -o


NAME		=	solver

INCLUDE		=	-I include


CFLAGS		+=	-Wall

CPPFLAGS	+=	$(INCLUDE)

LDFLAGS		+=	-lm


REMOVE		=	rm -f

BUILD		=	make -C

M_CLEAN		=	clean

M_FCLEAN	=	fclean

ALL		=	all


all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(NAME) $(CFLAGS) $(CPPFLAGS) $(OBJ) $(LDFLAGS)

clean:
		$(REMOVE) $(OBJ)

fclean:		$(M_CLEAN)
		$(REMOVE) $(NAME)

re:		$(M_FCLEAN) $(ALL)

.PHONY: $(ALL) $(M_CLEAN) $(M_FCLEAN) re