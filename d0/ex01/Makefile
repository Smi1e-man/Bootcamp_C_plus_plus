# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 10:50:19 by seshevch          #+#    #+#              #
#    Updated: 2019/04/01 17:33:25 by seshevch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone_book
FLAG = -Wall -Wextra -Werror
SRC = main.cpp \
		Object_data.cpp
OBJ = main.o Object_data.o
INCL = 

all: $(NAME)

$(NAME): $(OBJ)
		clang++ -o $(NAME) $(FLAG) $(OBJ)

$(OBJ): %.o: %.cpp
		clang++ -c $< -o $@ $(FLAG) $(INCL)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
