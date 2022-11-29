NAME = libftprintf.a
CC = cc
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)
LIBFT = libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJ)
	cp libft/$(LIBFT) ./$(NAME)
	ar -rus $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		make clean -C libft
fclean: clean
		rm -f $(NAME)
		make fclean -C libft

re: fclean all


