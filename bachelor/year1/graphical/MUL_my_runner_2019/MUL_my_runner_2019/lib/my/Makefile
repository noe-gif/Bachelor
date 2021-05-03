##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_putstr.c \
		my_str_isupper.c \
		my_rev_str.c \
		my_strlen.c \
		my_showmem.c \
		my_strlowcase.c \
		my_compte_square_root.c \
		my_showstr.c \
		my_compute_power_rec.c \
		my_sort_int_array.c \
		my_strncat.c \
		my_find_prime_sup.c \
		my_strcapitalize.c \
		my_strncmp.c \
		my_getnbr.c \
		my_strcat.c \
		my_strncpy.c \
		my_isneg.c \
		my_strcmp.c \
		my_strstr.c \
		my_is_prime.c \
		my_strcpy.c \
		my_strupcase.c \
		my_print_alpha.c \
		my_str_isalpha.c \
		my_atoi.c \
		my_swap.c \
		my_print_revalpha.c \
		my_str_islower.c \
		my_putchar.c \
		my_str_isnum.c \
		my_put_nbr.c \
		my_get_char.c \
		my_str_isprintable.c \
		my_itoa.c

OBJ	=	$(SRC:.c=.o)

NAME    =       libmy.a

CC	=	ar rc

RM	=	rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	$(CC) $(NAME) *.o

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all













