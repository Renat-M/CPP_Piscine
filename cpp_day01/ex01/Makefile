# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meourea <meourea@student.school21.ru>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 17:12:55 by meourea           #+#    #+#              #
#    Updated: 2022/05/09 19:44:34 by meourea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		zombie_ex01

CC			=		c++

FLAGS		=		-Wall -Wextra -Werror -std=c++98

SRC			=		main.cpp zombieHorde.cpp Zombie.cpp

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