##
## EPITECH PROJECT, 2021
## arcade
## File description:
## makefile
##

SRC = main.cpp \
	  Data.cpp \
	  Exception.cpp

CXX = g++

CXXFLAGS = -W -Wall -Wextra -I../include -fPIC

NAME = ../arcade

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	echo
	$(CXX) -o $(NAME) $(OBJ) -ldl

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	@./$(NAME)

.PHONY: all clean fclean re test