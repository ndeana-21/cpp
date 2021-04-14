# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/08 23:00:11 by ndeana            #+#    #+#              #
#    Updated: 2021/03/17 02:14:12 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Replace.hpp
SRCS = Replace.cpp main.cpp
OBJ = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $@

%.o:%.cpp $(HEADER)
		$(CC) $(FLAGS)  -c $<

clean:
		rm -rf $(OBJ)

fclean:
		rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONE: all clean fclean re
