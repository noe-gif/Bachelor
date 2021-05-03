##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c 								\
		src/assets/sprite/set_data_sprites.c 					\
		src/instances/menu/loop/menu_loop.c 					\
		src/instances/menu/sprite/menu_drawing.c 				\
		src/instances/menu/event/menu_event_loop.c 				\
		src/instances/menu/sprite/menu_load_sprite.c 				\
		src/instances/menu/sprite/menu_load_second_sprite.c 			\
		src/instances/menu/sprite/menu_position_rect.c 				\
		src/technical/window/create_window.c 					\
		src/technical/window/window_size.c 					\
		src/assets/transition/menu_anime_transition.c 				\
		src/assets/transition/menu_transition.c 				\
		src/instances/menu/hitbox_button/is_touched.c 				\
		src/instances/menu/hitbox_button/is_event_touched.c 			\
		src/instances/menu/hitbox_button/is_also_touched.c 			\
		src/technical/clock_management/create_clock/create_clock.c 		\
		src/assets/music/create_menu_music/create_menu_music.c 			\
		src/instances/map_selection/loop/map_selection_loop.c 			\
		src/instances/map_selection/sprite/selection_map_drawing.c 		\
		src/instances/map_selection/sprite/map_selection_position_rect.c 	\
		src/instances/map_selection/sprite/map_selection_load_sprites.c 	\
		src/instances/map_selection/sprite/map_selection_load_second_sprites.c 	\
		src/instances/map_selection/event/map_selection_event_loop.c 		\
		src/instances/map_selection/hitbox_button/is_touched_map.c 		\
		src/instances/game/loop/game_loop.c 					\
		src/instances/game/sprite/game_drawing.c 				\
		src/instances/game/sprite/game_second_drawing.c 			\
		src/instances/game/event/game_event_loop.c 				\
		src/instances/game/sprite/game_load_sprites.c 				\
		src/instances/game/sprite/game_position_rect.c 				\
		src/instances/game/sprite/game_load_second_sprites.c 			\
		src/instances/game/hitbox_button/is_button_game_touched.c 		\
		src/instances/game/hitbox_button/are_other_button_touched.c 		\
		src/instances/game/hitbox_button/drag_and_drop.c 			\
		src/instances/game/hitbox_button/placement_hitbox.c 			\
		src/instances/game/sprite/game_load_third_sprites.c 			\
		src/instances/game/sprite/game_load_fourth_sprites.c 			\
		src/instances/game/event/anime_turrets.c 				\
		src/instances/game/text/create_game_text.c 				\
		src/instances/game/text/create_other_game_text.c 			\
		src/technical/linked_list/linked_list.c 				\
		src/technical/linked_list/linked_list_baloons.c 			\
		src/technical/linked_list/second_linked_list.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

CC	=	gcc -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -lm

CFLAGS	=	-W -Wall -Wextra -I ./include

RM	=	rm -f

ifeq    ($(debug), 1)
	CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ) -L./lib/my -lmy

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	make -C lib/my fclean
	$(RM) $(NAME)

re:	fclean all
