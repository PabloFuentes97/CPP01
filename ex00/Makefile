NAME = zombie

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME) 

CC		= c++

CCFLAGS	= -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJ)
		$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)
clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re