##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c \
		src/handle_clients.c \
		src/setup_server.c \
		src/start_server.c \
		src/lib.c \
		src/linked_list.c \
		src/commands/cdup.c \
		src/commands/cwd.c \
		src/commands/dele.c \
		src/commands/help.c \
		src/commands/list.c \
		src/commands/noop.c \
		src/commands/pass.c \
		src/commands/pasv.c \
		src/commands/port.c \
		src/commands/pwd.c \
		src/commands/quit.c \
		src/commands/retr.c \
		src/commands/stor.c \
		src/commands/user.c

OBJ	=	$(SRC:.c=.o)

NAME	=	myftp

CC	=	gcc

CFLAGS	=	-Wall -Wextra -I./include

RM	=	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all