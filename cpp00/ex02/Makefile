# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/18 16:08:19 by mdegache          #+#    #+#              #
#    Updated: 2025/09/18 16:11:44 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[31m
GREEN=\033[32m
PURPLE=\033[35m
RESET=\033[0m

NAME = new_job

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(SRC)
		@$(CC) $(SRC) $(CFLAGS) -o $(NAME)
		@echo "$(GREEN)SUCCESS$(RESET)"

clean : 
		@rm -f $(OBJ)
		@echo "$(PURPLE)CLEAN$(RESET)"

fclean : clean
		@rm -rf $(NAME)
		@echo "$(RED)FCLEAN$(RESET)"

re : fclean all

.PHONY : all clean fclean re NAME