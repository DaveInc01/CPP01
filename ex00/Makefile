NAME = zombie

SRC = main.cpp Zombie.cpp

OBJ=$(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(STD) $< -o $@

%.o: %.c
	$(FLAGS) $(STD) -c $< -o $@

fclean:
	$(RM) $(OBJ) $(NAME)

clean:
	$(RM) $(NAME)

re:	fclean all