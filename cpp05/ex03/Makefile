.PHONY:	all clean fclean re run

NAME		= bureaucrat

SRCS		= Bureaucrat.cpp		\
		  Form.cpp			\
		  ShrubberyCreationForm.cpp	\
		  RobotomyRequestForm.cpp	\
		  PresidentialPardonForm.cpp	\
		  Intern.cpp			\
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

run:		$(NAME)
	@ clear
	@ ./$(NAME)
