##
## EPITECH PROJECT, 2018
## MUL_my_runner_2018
## File description:
## Makefile
##

SRC	=	first_file.c	\
		second_file.c	\
		my_putchar.c	\
		my_putstr.c	\
		third_file.c	\
		fourth_file.c	\
		main.c		\
		menu.c		\
		fifth_file.c	\
		sixth_file.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-g -g3 -ggdb  -I ./include \
		-lcsfml-audio -lcsfml-system -lcsfml-graphics -lcsfml-window

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm *~ -f $(NAME)

re:		fclean all
