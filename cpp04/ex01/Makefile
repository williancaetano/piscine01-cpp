NAME	= animal

SRCS	= ./main.cpp \
		  ./Animal.cpp \
		  ./Cat.cpp \
		  ./Dog.cpp \
		  ./WrongAnimal.cpp \
		  ./WrongCat.cpp \
		  ./WrongDog.cpp \
		  ./Brain.cpp \

INCLUDES	= ./Animal.hpp \
			  ./Cat.hpp \
			  ./Dog.hpp \
			  ./WrongAnimal.hpp \
			  ./WrongCat.hpp \
			  ./WrongDog.hpp \
			  ./Brain.hpp \

CFLAGS	= -std=c++98 -g -Wall -Wextra -Werror

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
