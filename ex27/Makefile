NAME=ft_display_file
CC=gcc
FLAGS=-Wall -Wextra -Werror
SRCS=ft_display_file.c funct.c
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

srcs/%.o: srcs/%.c
	$(CC) $(FLAGS) -c $(SRCS) 

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
