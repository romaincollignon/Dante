##
## EPITECH PROJECT, 2022
## Makefile ALL
## File description:
## Makefile ALL
##

NAME	=	compile

all:	$(NAME)

$(NAME):
	@echo -e "🔨 \033[0;32mCompile Generator 🔨"
	@make -s -C generator
	@echo -e "✅ Generator compiled ✅\n"
	@echo -e "🔨 \033[0;31mCompile Solver 🔨"
	@make -s -C solver
	@echo -e "✅ Solver compiled \033[0m✅"

clean:
	@echo -e "🧹 \033[0;32mClean Generator 🧹"
	@make clean -C generator/ > /dev/null
	@echo -e "✅ Removed all .o files in Generator ✅\n"
	@echo -e "🧹 \033[0;31mClean Solver 🧹"
	@make clean -C solver/ > /dev/null
	@echo -e "✅ Removed all .o files in Solver\033[0m ✅"

fclean:	clean
	@make fclean -C generator/ > /dev/null
	@make fclean -C solver/ > /dev/null

re:	fclean all
