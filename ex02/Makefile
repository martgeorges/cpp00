# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 08:32:03 by mgeorges          #+#    #+#              #
#    Updated: 2025/03/13 08:47:49 by mgeorges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	tests

C++		=	c++

C++_FLAGS	=	-Wall -Wextra -Werror -std=c++98 

SRCS		=	Account.cpp tests.cpp 
			
OBJS		=	$(SRCS:.cpp=.o)

GREEN = \033[1;32m

all: 	$(NAME)

$(NAME): $(OBJS)
		@echo "$(GREEN)Compiling $(NAME)...$(C++_FLAGS)"
		@$(C++) $(C++_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all