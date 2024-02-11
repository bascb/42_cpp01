NAME =  zombies
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra -g
SRC = Zombie.cpp zombieHorde.cpp main.cpp
	
all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus