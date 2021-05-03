##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	src/utils/runner.c \
		src/create/create_function_file.c \
		src/create/create_sprite.c \
		src/create/create_sprite_2.c \
		src/create/create_sprite_3.c \
		src/animation/moove_sprite.c \
		src/create/create_character.c \
		src/animation/player_casts.c \
		src/animation/moove_sprite_2.c \
		src/animation/moove_sprite_3.c \
		src/create/send_sprite.c \
		src/utils/event.c \
		src/utils/text.c \
		src/animation/transition_sprite.c \
		src/utils/hitbox_button.c \
		src/create/select_player.c \
		src/utils/clock.c \
		src/utils/score.c \
		src/utils/main.c \
		src/utils/loop_select.c \
		src/animation/hitbox_ennemy.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CC	=	gcc -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio -lm

CFLAGS	=	-W -Wall -Wextra

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
