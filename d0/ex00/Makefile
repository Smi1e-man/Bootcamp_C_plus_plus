# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 10:50:19 by seshevch          #+#    #+#              #
#    Updated: 2019/04/01 11:05:06 by seshevch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
FLAG = -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ = megaphone.o
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
