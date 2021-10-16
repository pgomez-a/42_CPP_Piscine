.PHONY:	all clean fclean re run

NAME		= Aaaaand...

SRCS		= ClapTrap.cpp		\
		  ScavTrap.cpp		\
		  FragTrap.cpp		\
		  DiamondTrap.cpp	\
		  main.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX		= clang++

CXXFLAGS	= -Wall -Werror -Wextra -Wshadow -Wno-shadow

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@ $(RM) $(OBJS)

fclean:		clean
	@ $(RM) $(NAME)

re:		fclean all

run:		all
	@ clear
	@ ./$(NAME)
