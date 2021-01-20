##
## EPITECH PROJECT, 2020
## matchstick
## File description:
## Makefile lib
##

SRC	=	my_strlen.c				\
		my_putstr.c				\
		my_putchar.c			\
		my_putnbr.c				\
		my_puterr.c				\
		my_getnbr.c				\
		create_game_board.c		\
		print_game_board.c		\
		update_game_board.c		\
		input.c					\
		count_matches.c			\
		read_input_and_print.c	\
		ai_code.c				\
		biggest_line.c			\
		calc_nim_sum.c			\
		display_function.c		\
		game_finish.c			\
		remove_matches.c		\
		start_game.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/
	cp struct.h ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm ../$(NAME)

re:	fclean	all
