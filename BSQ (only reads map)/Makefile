NAME = bsq

SRC = *.c

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: 	example	$(NAME) compile files

$(NAME): $(SRC)
		@$(CC) $(CC_FLAGS) $(SRC) -o $(NAME)

example:
	@./mapgen 8 8 7 > example_file

clean:
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)
		@rm -fr example_file
		@echo "Ff clean maken..."
		@echo "All files removed!"

re: fclean all

compile:
	@echo "Compiling files..."

files:
	@echo "..."
	@echo "..."
	@echo "..."
	@echo "..."
	@echo "All files compiled"