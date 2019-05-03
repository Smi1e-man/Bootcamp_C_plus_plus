# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 10:50:19 by seshevch          #+#    #+#              #
#    Updated: 2019/04/10 17:49:06 by seshevch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
FLAG = -Wall -Wextra -Werror
SRC = main.cpp
OBJ = main.o
INCL =

all: $(NAME)

$(NAME): $(OBJ)
		clang++ -o $(NAME) $(FLAG) $(OBJ)

$(OBJ): $(SRC)
		clang++ -c $< -o $@ $(FLAG) $(INCL)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
