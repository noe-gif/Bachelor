##
## EPITECH PROJECT, 2021
## arcade
## File description:
## makefile
##

CC	= g++ -fPIC -shared -g

NAME = ../arcade_sdl2.so

RM = rm -rf

SRC	= ./src/SDL2.cpp \
	  ../../src/Data.cpp

CXXFLAGS = -Wall -Wextra -I../../include 

LDXXFLAGS += -lSDL2 -lSDL2_image

all:	$(NAME)

$(NAME):
	$(CC) $(CXXFLAGS) $(SRC) $(LDXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all