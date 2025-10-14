# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 14:54:53 by mdegache          #+#    #+#              #
#    Updated: 2025/10/14 21:51:36 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[31m
GREEN=\033[32m
PURPLE=\033[35m
RESET=\033[0m

NAME = Moar

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(OBJ)

$(NAME): 
		@$(CC) $(SRC) $(CFLAGS) -o $(NAME)
		@echo "$(GREEN)SUCCESS$(RESET)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@rm -f $(OBJ)
		@echo "$(PURPLE)CLEAN$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED)FCLEAN$(RESET)"

re: fclean all

.PHONY : all clean fclean re