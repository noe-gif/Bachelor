##
## EPITECH PROJECT, 2021
## arcade
## File description:
## makefile
##

CC	= g++ -fPIC -shared -g

NAME = ../../lib/menusfml.so

RM = rm -rf

SRC	= src/menu.cpp \
	  ../../src/Data.cpp

CXXFLAGS = -Wall -Wextra -I../../include

all:	$(NAME)

$(NAME):
	$(CC) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all