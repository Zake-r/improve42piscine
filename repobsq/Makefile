NAME = bsq
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = find_square.c matrice.c transcription.c main.c header.h check_map.c
OBJ = $(SRC:.c=.o)
NAME = bsq

bsq: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAG) -c  $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean bsq

.PHONY: bsq clean fclean re
