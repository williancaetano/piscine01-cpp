NAME = zombie

SRCS = ./main.cpp\
	   ./Zombie.cpp\
	   ./newZombie.cpp\
	   ./randomChump.cpp\

CC = g++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re: clean all

.PHONY: all clean re