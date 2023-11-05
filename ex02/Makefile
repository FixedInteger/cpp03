CXX = C++ 
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = claptrap
HEADER = Claptrap.hpp ScavTrap.hpp FragTrap.hpp
SRCS = Claptrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all


