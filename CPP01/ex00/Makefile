# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 17:05:48 by mbany             #+#    #+#              #
#    Updated: 2025/05/25 12:30:00 by mbany            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@echo "\033[33m© copyright by\033[0m"
	@echo "\033[33m __  __ ___   _   _  ___   __\033[0m"
	@echo "\033[33m|  \\/  | _ ) /_\\ | \\| \\ \\ / /\033[0m"
	@echo "\033[33m| |\\/| | _ \\/ _ \\| .\` |\\ V / \033[0m"
	@echo "\033[33m|_|  |_|___/_/ \\_\\_|\\_| |_| \033[0m"
	@echo "\033[33m2025\033[0m"

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re