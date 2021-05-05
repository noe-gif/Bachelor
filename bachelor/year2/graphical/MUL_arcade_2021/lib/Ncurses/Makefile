##
## EPITECH PROJECT, 2021
## arcade
## File description:
## makefile
##

CC	= g++ -fPIC -shared -g

NAME = ../arcade_ncurses.so

RM = rm -rf

SRC	= src/Ncurse.cpp \
	  ../../src/Data.cpp

CXXFLAGS = -Wall -Wextra -I../../include

LDXXFLAGS += -lncurses

all:	$(NAME)

$(NAME):
	$(CC) $(CXXFLAGS) $(SRC) $(LDXXFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all