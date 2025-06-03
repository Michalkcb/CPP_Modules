# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 17:05:48 by mbany             #+#    #+#              #
#    Updated: 2025/06/03 19:31:45 by mbany            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04
SRC = main.cpp \
	
# Object files
OBJ = $(SRC:.cpp=.o)
  
# Compiler and flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Default rule
all: $(NAME)

# Link object files into executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[33m© copyright by\033[0m"
	@echo "\033[33m __  __ ___   _   _  ___   __\033[0m"
	@echo "\033[33m|  \\/  | _ ) /_\\ | \\| \\ \\ / /\033[0m"
	@echo "\033[33m| |\\/| | _ \\/ _ \\| .\` |\\ V / \033[0m"
	@echo "\033[33m|_|  |_|___/_/ \\_\\_|\\_| |_| \033[0m"
	@echo "\033[33m2025\033[0m"

# Compile source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ) $(OBJ:.o=.d)

# Clean everything
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

# Include dependencies
-include $(OBJ:.o=.d)

# Phony targets
.PHONY: all clean fclean re