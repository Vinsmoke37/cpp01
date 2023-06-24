NAME = attack
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =Weapen.cpp HumanA.cpp HumanB.cpp main.cpp

OBJ =$(SRC:.cpp=.o)

H =HumanA.hpp HumanB.hpp Weapon.hpp

all :$(NAME)

$(NAME):$(OBJ) $(H)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -fsanitize=address -g3

clean : 
		rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
re : fclean all


vinsmok: all  clean
		@clear