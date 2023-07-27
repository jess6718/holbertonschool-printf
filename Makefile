CC = gcc

SRC0 = write_func.c get_write_func.c _printf.c main.c
OBJ0 = $(SRC0:.c=.o)
NAME0 = _printf

BETTY = betty

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

all: 0

test:
	$(CC) $(SRC0) -o $(NAME0)

0:
	$(BETTY) $(SRC0)
	make $(NAME0)

$(NAME0): $(OBJ0)
	$(CC) $(OBJ0) -o $(NAME0)

clean:
	$(RM) *~ $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4)

oclean:
	$(RM) $(OBJ0) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4)

fclean: clean oclean

re: fclean all
