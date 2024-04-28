NAME = megaphone

SRC = megaphone.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

fclean: clen

re: clean all

.PHONY: all clean fclean re