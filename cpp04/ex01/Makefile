# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 14:31:39 by pgomez-a          #+#    #+#              #
#    Updated: 2021/10/25 14:32:07 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	all clean fclean re run

NAME		= call_animals

SRCS		= Animal.cpp	\
			  Dog.cpp		\
			  Cat.cpp		\
			  Brain.cpp		\
			  main.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++

CXXFLAGS	= -Wall -Werror -Wextra

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@ $(RM) $(OBJS)

fclean:		clean
	@ $(RM) $(NAME)

re:			fclean all

run:		all
	@ clear
	@ ./$(NAME)
