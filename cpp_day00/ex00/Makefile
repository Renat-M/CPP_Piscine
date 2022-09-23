# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meourea <meourea@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 16:18:51 by meourea           #+#    #+#              #
#    Updated: 2022/05/07 16:18:52 by meourea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		megaphone

CC			=		c++

FLAGS		=		-Wall -Wextra -Werror -std=c++98

SRC			=		MegaPhone.cpp

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