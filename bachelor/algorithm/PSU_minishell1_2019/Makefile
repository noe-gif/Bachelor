##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c \
		src/parsing/first_parsing.c \
		src/shell_command/env_commands.c \
		src/shell_command/env_commands_2.c \
		src/shell_command/change_directory.c \
		src/utils/utils.c \
		src/utils/array_functions.c \
		src/signal/get_signal.c \
		src/shell_command/browse_path.c \
		src/utils/prompt.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -I./include

RM	=	rm -f

ifeq	($(debug), 1)
	CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) -o$(NAME) $(OBJ) -L./lib/my -lmy

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	make -C lib/my fclean
	$(RM) $(NAME)

re:	fclean all
