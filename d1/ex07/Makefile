# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 10:50:19 by seshevch          #+#    #+#              #
#    Updated: 2019/04/03 13:57:05 by seshevch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = s.s
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
		rm -f *.replace

re: fclean all
