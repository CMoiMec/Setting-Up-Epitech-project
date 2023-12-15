##
## EPITECH PROJECT, 2023
## makefile
## File description:
## les makefile de la lib
##

SRC	=	my_compute_power_rec.c\
		my_compute_square_root.c\
		my_find_prime_sup.c\
		my_getnbr.c\
		my_isalnum.c\
		my_isalpha.c\
		my_islower.c\
		my_isneg.c\
		my_isnum.c\
		my_is_prime.c\
		my_isprint.c\
		my_isupper.c\
		my_printf.c\
		my_putchar.c\
		my_putchar_list.c\
		my_put_nbr.c\
		my_put_nbr_list.c\
		my_put_nbr_list2.c\
		my_put_pourcent.c\
		my_putstr.c\
		my_putstr_e.c\
		my_putstr_list.c\
		my_revstr.c\
		my_showmem.c\
		my_showstr.c\
		my_show_word_array.c\
		my_sort_int_array.c\
		my_strcapitalize.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_strdup.c\
		my_str_isalnum.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strstr.c\
		my_str_to_word_array.c\
		my_strupcase.c\
		my_swap.c\
		conv_hexa_min.c\
		conv_hexa_maj.c\
		conv_bin.c\
		conv_octal.c\
		my_get_len.c\
		my_put_pointeur.c\
		my_wr_sc.c\
		my_wr_sc2.c\
		my_put_unsigned.c\
		my_float.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv libmy.a ../../
	cp my.h ../../include/

clean:
	rm -rf *.o

fclean: clean
	rm -f $(OBJ) ../../libmy.a

re:	fclean all
