# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 14:53:37 by mgeorges          #+#    #+#              #
#    Updated: 2025/02/25 14:07:52 by mgeorges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

C++		=	c++

C++_FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	sources/main.cpp \
			sources/Contact.cpp #sources/PhoneBook.cpp
			
OBJS		=	$(SRCS:.cpp=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
		@echo "compiling $(NAME)..."
		@$(C++) $(C++_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
