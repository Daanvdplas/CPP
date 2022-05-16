NAME = harlFilter
SRC = main.cpp Harl.cpp
INC = Harl.hpp

ifdef DEBUG
	CC=clang++
	FLAGS = -Wall -Wextra -fsanitize=address -g3 -std=c++98
else
	CC=c++
	FLAGS = -Wall -Wextra -Werror
endif

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean reAME = brainzz
