# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/08 16:46:55 by ndeana            #+#    #+#              #
#    Updated: 2020/12/08 22:59:31 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
FLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp
OBJ = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONE: all clean fclean re