# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meourea <meourea@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 16:31:43 by meourea           #+#    #+#              #
#    Updated: 2022/05/08 14:22:46 by meourea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		phonebook

CC			=		c++

FLAGS		=		-Wall -Wextra -Werror -std=c++98

SRC			=		main.cpp PhoneBook.cpp Contact.cpp

OBJ			=		$(patsubst %.cpp,%.o,$(SRC))

OBJS_DIR	=		objects/

OBJS		=		$(addprefix $(OBJS_DIR), $(OBJ))



all				:	$(NAME)

$(NAME)			:	$(OBJS)
				$(CC) $(FLAGS) -o $(NAME) $?

$(OBJS_DIR)%.o	:	%.cpp
				mkdir -p $(OBJS_DIR)
				$(CC) $(FLAGS) -c $< -o $@



clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re