NAME	= abstract

SRCS	= ./main.cpp \
		  ./AAnimal.cpp \
		  ./Cat.cpp \
		  ./Dog.cpp \
		  ./AWrongAnimal.cpp \
		  ./WrongCat.cpp \
		  ./WrongDog.cpp \
		  ./Brain.cpp \

INCLUDES	= ./AAnimal.hpp \
			  ./Cat.hpp \
			  ./Dog.hpp \
			  ./AWrongAnimal.hpp \
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
