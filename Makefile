NAME = libftprintf.a
CC = cc
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rus $(NAME) $(SRCO)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all


