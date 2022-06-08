CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=do-op
INC=includes
SRCS=main.c ft_atoi.c ft_cal.c ft_putnbr.c
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I $(INC) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
