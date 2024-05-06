NAME = push_swap
NAMEBONUS = checker
GCC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar -rcs
HEADER = push_swap.h
SRC = print_number.c push_commands.c push_swap_commands.c push_swap_initial.c push_swap_moving.c revrotate_commands.c rotate_command.c sort_alghoritm.c split.c stack_initial.c stack_utils.c swap_commands.c errors.c
SRCBONUS = ./checkers/get_next_line.c ./checkers/get_next_line_utils.c ./checkers/checker.c 
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) Makefile
	$(GCC) $(FLAGS) $(OBJ) main.c -o $(NAME)

bonus : $(OBJBONUS) $(OBJ)
	$(GCC) $(CFLAGS) $(OBJ) $(OBJBONUS) -o $(NAMEBONUS)
	
clean :
	rm -rf $(OBJ) $(OBJBONUS)

fclean : clean
	rm -rf $(NAME) $(NAMEBONUS)

re : fclean all

.PHONY : all clean fclean re bonus