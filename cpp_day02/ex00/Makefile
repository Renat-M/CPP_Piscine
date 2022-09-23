# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meourea <meourea@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 13:58:12 by meourea           #+#    #+#              #
#    Updated: 2022/05/11 15:19:09 by meourea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		ex00

CC			=		c++

FLAGS		=		-Wall -Wextra -Werror -std=c++98

SRC			=		main.cpp Fixed.cpp

OBJ			=		$(patsubst %.cpp,%.o,$(SRC))

OBJS_DIR	=		objects/

OBJS		=		$(addprefix $(OBJS_DIR), $(OBJ))



all				:	$(NAME)

$(NAME)			:	$(OBJS_DIR) $(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)		:
				mkdir -p $(OBJS_DIR)
				
$(OBJS_DIR)%.o	:	%.cpp
				$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re