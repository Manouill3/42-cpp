# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 18:45:24 by mdegache          #+#    #+#              #
#    Updated: 2025/10/09 14:58:35 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[31m
GREEN=\033[32m
PURPLE=\033[35m
RESET=\033[0m

NAME = DiamondTrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

all: $(NAME)

$(NAME): 
		@$(CC) $(SRC) $(CFLAGS) -o $(NAME)
		@echo "$(GREEN)SUCCESS$(RESET)"

clean:
		@rm -f $(OBJ)
		@echo "$(PURPLE)CLEAN$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED)FCLEAN$(RESET)"

re: fclean all

.PHONY : all clean fclean re $(NAME)