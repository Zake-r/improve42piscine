EXEC = rush02
FILES = main.c split_number.c side_function.c find_number.c
FLAGS = -Wall -Werror -Wextra
OBJECTS = $(FILES:.c=.o)

$(EXEC): $(OBJECTS)
	cc $(OBJECTS) -o $(EXEC)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

fclean:
	rm -f $(EXEC) $(OBJECTS)
