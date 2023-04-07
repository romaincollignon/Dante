##
## EPITECH PROJECT, 2022
## makefile
## File description:
## Dante: Solver
##

SRC 	=	src/function/mini_printf.c \
			src/function/my_put_nbr.c \
			src/function/my_putchar.c \
			src/function/my_putstr.c \
			src/function/my_getnbr.c \
			src/function/my_str_to_word_array.c \
			src/solver/solver.c \
			src/solver/moove.c \
			src/solver/all_moove.c \
			src/open_file.c \
			src/main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -Wall -Wextra -I ./include/ -g

NAME	=	solver

all:	$(NAME)

$(NAME): $(OBJ)
	@echo -e "🔨 \033[0;32mCompile Solver \033[0;30m🔨"
	gcc $(OBJ) $(CFLAGS) -o $(NAME) -lncurses
	@echo -e "✅ \033[0;31mSolver Compiled ✅ \033[0m"

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

debug :
	gcc $(SRC) -Wall -Wextra -I include -o $(NAME) -g $(CFLAGS)

.PHONY:	all clean fclean re
