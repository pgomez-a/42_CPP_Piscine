# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:06:19 by pgomez-a          #+#    #+#              #
#    Updated: 2021/11/09 11:06:28 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	all clean fclean re run

NAME		= iter

SRCS		= main.cpp

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
