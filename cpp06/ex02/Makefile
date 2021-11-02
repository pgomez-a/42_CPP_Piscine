# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 11:47:27 by pgomez-a          #+#    #+#              #
#    Updated: 2021/11/02 11:47:43 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	all clean fclean re run

NAME		= identify

SRCS		= main.cpp	\
			  utils.cpp

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

run:		$(NAME)
	@ clear
	@ ./$(NAME)
