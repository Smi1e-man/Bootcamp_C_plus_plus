# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 16:36:06 by atikhono          #+#    #+#              #
#    Updated: 2019/04/07 19:05:27 by seshevch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_retro

OBJ =	$(SRC:.cpp=.o)

FLAGS =	-Wfatal-errors -Wall -Wextra -Werror

SRC =	main.cpp\
		Bullet.cpp\
		Game.cpp\
		Enemy.cpp\
		Hero.cpp\
		Star.cpp

all: $(NAME)

obj: $(OBJ)

$(NAME) : $(OBJ)
		clang++ $(FLAGS) $^ -o $(NAME) -lncurses

%.o: %.cpp
		clang++ $(FLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJ)

fclean:  clean
		rm -rf $(NAME)

re: fclean all
