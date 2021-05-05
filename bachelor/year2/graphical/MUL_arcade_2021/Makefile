##
## EPITECH PROJECT, 2021
## arcade
## File description:
## makefile
##

# + nibbler
# doc !!

CC = g++

RM = rm -f

NAME = arcade

CXXFLAGS = -I./include -Wall -Wextra -fPIC

LDFLAGS = -ldl

SRC = src/main.cpp \
	  src/Data.cpp	\
	  src/Exception.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

core:
	cd src && $(MAKE) re

games:
	cd myGames/Pacman && $(MAKE) re
	cd myGames/Nibbler && $(MAKE) re

graphicals:
	cd lib/Ncurses && $(MAKE) re
	cd lib/Sfml && $(MAKE) re
	cd lib/SDL2 && $(MAKE) re

$(NAME):	$(OBJ)
	cd lib/Ncurses && $(MAKE)
	cd lib/SDL2 && $(MAKE)
	cd lib/Sfml && $(MAKE)
	cd myGames/Pacman && $(MAKE)
	cd myGames/MenuSfml && $(MAKE)
	cd myGames/Nibbler && $(MAKE)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	cd lib/Ncurses && $(MAKE) clean
	cd lib/Sfml && $(MAKE) clean
	cd lib/SDL2 && $(MAKE) clean
	cd myGames/Nibbler && $(MAKE) clean
	cd myGames/Pacman && $(MAKE) clean
	$(RM) $(OBJ)

fclean:		clean
	cd lib/Ncurses && $(MAKE) fclean
	cd lib/Sfml && $(MAKE) fclean
	cd lib/SDL2 && $(MAKE) fclean
	cd myGames/Nibbler && $(MAKE) fclean
	cd myGames/Pacman && $(MAKE) fclean
	cd myGames/MenuSfml && $(MAKE) fclean
	$(RM) $(NAME)

re:	fclean all