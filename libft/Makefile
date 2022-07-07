CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARTGET=libft.a
SRCS=
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -I $(INC) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
