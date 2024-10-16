CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INCLUDES = includes
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_putstr.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(SRC_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
