##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_get_char.c \
		my_str_to_word_array.c \
		my_show_word_array.c \
		my_put_unsigned_int.c \
		my_putnbr_base.c \
		my_puthexa.c \
		my_printf.c

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













