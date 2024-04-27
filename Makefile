NAME = push_swap
GCC = gcc
FLAGS = -Wall -Wextra -Werror
ARCHIVE = push_swap.a
LIB = ar -rcs

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(ARCHIVE)
	$(GCC) $(FLAGS) $^ -o $@

$(ARCHIVE): $(OBJ)
	$(LIB) $@ $^

%.o : %.c
	$(GCC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ) $(ARCHIVE)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus