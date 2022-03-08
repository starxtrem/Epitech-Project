##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

NAME    = my_test ## replace by name you want

CC    = gcc

RM    = rm -f

SRC    = ./sources/example.c	\
		./sources/example2.c	\

OBJS    = $(SRC:.c=.o)

LIBFLAG    = -g3 -I./include ## flag you want

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME) $(LIBFLAG) $(LIBFLAG1)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)
	$(RM) $(OBJS)

re: fclean all
