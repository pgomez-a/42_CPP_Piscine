.PHONY:	all clean fclean re

NAME		= call_animals

SRCS		= Animal.cpp		\
		  Dog.cpp		\
		  Cat.cpp		\
		  WrongAnimal.cpp	\
		  WrongCat.cpp		\
		  Brain.cpp		\
		  main.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX		= clang++

CXXFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@ $(RM) $(OBJS)

fclean:		clean
	@ $(RM) $(NAME)

re:		fclean all
