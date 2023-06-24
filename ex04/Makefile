NAME = 
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
1
SRC =
OBJ =$(SRC:.cpp=.o)

H =
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