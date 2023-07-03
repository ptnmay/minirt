NAME = minirt
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
HEADER = minirt.h

LIBFT = ./libft/libft.a
LIBFT_PATH = libft

SRC = minirt.c verify_file.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(CC) $(OBJ) $(LIBFT) -o $(NAME)
$(LIBFT) :
			make -C $(LIBFT_PATH)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all



.PHONY: all clean fclean re
