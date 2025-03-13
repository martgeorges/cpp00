# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 14:53:37 by mgeorges          #+#    #+#              #
#    Updated: 2025/03/13 07:44:16 by mgeorges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

C++		=	c++

C++_FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	sources/main.cpp \
			sources/Contact.cpp sources/PhoneBook.cpp
			
OBJS		=	$(SRCS:.cpp=.o)

GREEN = \033[1;32m

all: 	$(NAME)

$(NAME): $(OBJS)
		@echo "$(GREEN)Compiling $(NAME)...$(C++_FLAGS) $(RESET)"
		@$(C++) $(C++_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
