# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 14:13:26 by mgeorges          #+#    #+#              #
#    Updated: 2025/02/24 16:16:51 by mgeorges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

C++		=	c++

C++_FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
		$(C++) $(C++_FLAGS) $(OBJS) -o $(NAME)
		rm -f $(OBJS)
		
%.o: %.cpp
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
