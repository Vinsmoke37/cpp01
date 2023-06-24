NAME = zombieV2
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp  Zombie.cpp zombieHorde.cpp

OBJ =$(SRC:.cpp=.o)

H =Zombie.hpp

all :$(NAME)

$(NAME):$(OBJ) $(H)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
re : fclean all


vinsmok: all  clean
		@clear