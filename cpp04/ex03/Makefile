.PHONY:	all clean fclean re run

NAME		= interfaces

SRCS		= AMateria.cpp		\
		  Cure.cpp		\
		  Ice.cpp		\
		  Character.cpp		\
		  MateriaSource.cpp	\
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

run:		all
	@ clear
	@ ./$(NAME)
