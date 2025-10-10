# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 09:29:58 by mdegache          #+#    #+#              #
#    Updated: 2025/10/10 14:42:38 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[31m
GREEN=\033[32m
PURPLE=\033[35m
RESET=\033[0m

NAME = polymorphism

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

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

.PHONY : all clean fclean re