SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp

NAME = Polymorphism

CC = c++ -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC) Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean."

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
