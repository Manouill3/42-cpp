# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 18:45:24 by mdegache          #+#    #+#              #
#    Updated: 2025/10/21 12:42:38 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[31m
GREEN=\033[32m
PURPLE=\033[35m
RESET=\033[0m

NAME = FragTrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(SRC) $(CFLAGS) -o $(NAME)
		@echo "$(GREEN)SUCCESS$(RESET)"

%.o:%.cpp
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@rm -f $(OBJ)
		@echo "$(PURPLE)CLEAN$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED)FCLEAN$(RESET)"

re: fclean all

.PHONY : all clean fclean re