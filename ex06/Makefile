NAME = Harl
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp  Harl.cpp 

OBJ =$(SRC:.cpp=.o)

H =Harl.hpp

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