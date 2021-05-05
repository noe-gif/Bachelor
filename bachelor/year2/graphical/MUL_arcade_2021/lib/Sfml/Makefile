##
## EPITECH PROJECT, 2021
## arcade
## File description:
## makefile
##

CC	= g++ -fPIC -shared -g

NAME = ../arcade_sfml.so

RM = rm -rf

SRC	= src/sfml.cpp \
	  ../../src/Data.cpp

CXXFLAGS = -Wall -Wextra -I../../include

LDXXFLAGS += -lsfml-graphics -lsfml-window -lsfml-system

all:	$(NAME)

$(NAME):
	$(CC) $(CXXFLAGS) $(SRC) $(LDXXFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all