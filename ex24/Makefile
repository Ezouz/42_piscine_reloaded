NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c\
       srcs/ft_strlen.c srcs/ft_swap.c 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(BJS)

fclean:
	rm -f $(NAME)

re: fclean all
