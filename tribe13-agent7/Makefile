CC=gcc
CFLAGS=-Wall -Wextra -O3 -flto
CPPFLAGS=-I../src
LDFLAGS=-flto -L../bin -lagent

OBJS =	main.o \
		back_to_hive.o \
		back_to_hive2.o \
		check_if_type.o \
		find_neighbours.o \
		endgame.o \
		second_breakfast.o \
		first_blood.o \

NAME=agent

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
