SRC = src/main.cpp src/Animal.cpp src/Dog.cpp src/Cat.cpp src/Brain.cpp

NAME = Polymorphism

CC = c++ -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC) inc/Animal.hpp inc/Dog.hpp inc/Cat.hpp inc/Brain.hpp
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean."

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
