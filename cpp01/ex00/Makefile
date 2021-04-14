# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/08 23:00:11 by ndeana            #+#    #+#              #
#    Updated: 2020/12/08 23:01:59 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

CC = clang++
FLAGS = -Wall -Wextra -Werror

HEADER = Phones_book.hpp PersonClass/Person.hpp
SRCS = Phones_book.cpp Person_func.cpp
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
