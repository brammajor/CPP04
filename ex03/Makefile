SRC = src/Character.cpp src/Cure.cpp src/Ice.cpp src/MateriaSource.cpp src/AMateria.cpp src/main.cpp

NAME = gaming

CC = c++ -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC) inc/AMateria.hpp inc/Character.hpp inc/Cure.hpp inc/Ice.hpp inc/ICharacter.hpp inc/IMateriaSource.hpp inc/MateriaSource.hpp 
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean."

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
