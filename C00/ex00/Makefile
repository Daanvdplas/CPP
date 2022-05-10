NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILE = $(CC) $(CFLAGS)

FILES =	megaphone.cpp

OBJS = $(FILES:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean | all

.PHONY: all clean fclean re
