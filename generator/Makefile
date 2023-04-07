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
			src/gen_perfect/g_perfect.c \
			src/gen_perfect/moove.c \
			src/gen_perfect/two_moove.c \
			src/gen_perfect/three_moove.c \
			src/gen_perfect/moove_map.c \
			src/gen_imperfect/g_imperfect.c \
			src/is_good.c \
			src/function.c \
			src/error.c \
			src/main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -Wall -Wextra -I ./include/ -g

NAME	=	generator

all:	$(NAME)

$(NAME): $(OBJ)
	@echo -e "🔨 \033[0;32mCompile Generator \033[0;30m🔨"
	gcc $(OBJ) $(CFLAGS) -o $(NAME) -lncurses
	@echo -e "✅ \033[0;31mGenerator Compiled ✅ \033[0m"

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

debug :
	gcc $(SRC) -Wall -Wextra -I include -o $(NAME) -g $(CFLAGS)

.PHONY:	all clean fclean re
