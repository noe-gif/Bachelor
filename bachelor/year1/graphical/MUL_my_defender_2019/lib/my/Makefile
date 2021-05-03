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
		my_itoa.c \
		my_strcat.c

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













