##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c \
		src/map/generate_map.c \
		src/map/upload_map.c \
		src/error/error.c \
		src/error/main_error.c \
		src/ia/create_ia.c \
		src/messages/messages.c \
		src/map/player_turn.c \
		src/norme/norme.c \
		src/norme/norme_2.c \
		src/ia/ia_message.c \
		src/norme/norme_3.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -I./include

RM	=	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) -L./lib/my -lmy

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	make -C lib/my fclean
	$(RM) $(NAME)

re:	fclean all
