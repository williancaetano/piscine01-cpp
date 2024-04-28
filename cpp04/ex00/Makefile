NAME	= animal

SRCS	= ./main.cpp \
		  ./Animal.cpp \
		  ./Cat.cpp \
		  ./Dog.cpp \
		  ./WrongAnimal.cpp \
		  ./WrongCat.cpp \
		  ./WrongDog.cpp \

INCLUDES	= ./Animal.hpp \
			  ./Cat.hpp \
			  ./Dog.hpp \
			  ./WrongCat.hpp \
			  ./WrongDog.hpp \

CFLAGS	= -std=c++98 -Wall -Wextra -Werror

CC		= c++

all: $(NAME)


$(NAME): $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME).dSYM
	rm -f $(NAME)

re: clean all

fclean: clean

.PHONY: all clean re fclean
