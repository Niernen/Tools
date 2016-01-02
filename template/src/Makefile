##
## Makefile for PROJECT_NAME in /home/grange_c/MyDoc/script/tools/template
##
## Made by benjamin grange
## Login   <grange_c@epitech.net>
##
## Started on  Sat Jan  2 00:17:40 2016 benjamin grange
## Last update Sat Jan  2 02:25:33 2016 benjamin grange
##

NAME	= PROJECT_NAME

SRC	= src/PROJECT_NAME.c \
	  src/basic/basic.c \
	  src/basic/basic_2.c \
	  src/basic/basic_3.c

CC	= gcc

RM	= @rm -f

OBJ	= $(SRC:.c=.o)

CFLAGS	= -W -Wall -Wextra -ansi -pedantic
CFLAGS	+= -I./include/
ECHO	= echo -e

DEFAULT	= "\033[00m"

GREEN	= "\033[0;32m"

RED	= "\033[0;31m"

all: $(NAME)

$(NAME): $(OBJ)
	@$(ECHO) "Linking .o files to create $(NAME)..."
	@$(CC) -o $(NAME) $(OBJ)

clean:
	@$(ECHO) "Cleaning .o files..."
	$(RM) $(OBJ)

fclean: clean
	@$(ECHO) "Cleaning executable..."
	$(RM) $(NAME)

re: fclean all

%.o: %.c
	@$(CC) -c $< -o $@ $(CFLAGS) && \
	$(ECHO) $(GREEN) "=>" $< $(DEFAULT) || \
	$(ECHO) $(RED) "=>" $< $(DEFAULT)

.PHONY: all clean fclean re
