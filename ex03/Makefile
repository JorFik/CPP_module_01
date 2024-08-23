NAME =		I_choose_violence_today

CXX =		c++
CXXFLAGS =	-Wall -Wextra -Werror
INCLUDES =	-I include

_HEADER =	Weapon.hpp HumanA.hpp HumanB.hpp
HEADER =	$(addprefix include/, $(_HEADER))
_SRC =		main.cpp\
			Weapon.cpp\
			HumanA.cpp\
			HumanB.cpp
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