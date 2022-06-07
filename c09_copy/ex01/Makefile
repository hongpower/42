CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRCS=srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS=$(SRCS:.c=.o)
INC=includes

all: $(NAME)

$(TARGET) : $(OBJS)
	ar rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -I $(INC) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
