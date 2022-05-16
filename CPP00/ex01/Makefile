NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILE = $(CC) $(CFLAGS)

FILES =	main.cpp Phonebook.cpp

OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) -o $(NAME)

%.o : %.cpp Phonebook.hpp Contact.hpp
	$(COMPILE) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean | all

.PHONY: all clean fclean re
