NAME = Account

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILE = $(CC) $(CFLAGS)

FILES =	 tests.cpp Account.cpp
OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) -o $(NAME)

%.o : %.cpp Account.hpp
	$(COMPILE) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean | all

.PHONY: all clean fclean re
