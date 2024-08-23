NAME =		HI_THIS_IS_BRAIN

CXX =		c++
CXXFLAGS =	-Wall -Wextra -Werror
INCLUDES =	-I include

_SRC =		main.cpp
SRC =		$(addprefix src/, $(_SRC))
OBJ =		$(SRC:src/%.cpp=bin/%.o)

all: $(NAME)

bin:
	@mkdir bin

bin/%.o: src/%.cpp $(HEADER) | bin
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re