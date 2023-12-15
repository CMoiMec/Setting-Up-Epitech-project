##
## EPITECH PROJECT, 2023
## makefile
## File description:
## task02- day10
##

SRC	=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	setting_up

CFLAGS	=	-g -Wall -Wextra
LDFLAGS	=	-L ./ -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my/
	gcc $(OBJ) -o $(NAME) $(LDFLAGS)
	rm libmy.a

clean:
	rm -f $(OBJ)
	rm -f *.gcda *.gcno
	make clean -C ./lib/my/

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests *.gcda *.gcno
	make fclean -C ./lib/my/

re:	fclean all

unit_tests:	fclean
	make -C ./lib/my/
	gcc -o unit_tests tests/*.c $(LDFLAGS) --coverage -lcriterion

tests_run:	unit_tests
	./unit_tests
