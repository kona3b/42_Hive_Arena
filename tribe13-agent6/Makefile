CC=gcc
CFLAGS=-Wall -Wextra -O3 -flto -v
CPPFLAGS=-I../src
LDFLAGS=-flto -L../bin -lagent

OBJS =	main.o \
		back_to_hive.o \
		check_if_type.o \
		follow_strategy.o \
		find_neighbours.o \
		search_and_destroy.o

NAME=agent

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
