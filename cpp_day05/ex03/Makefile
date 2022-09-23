# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meourea <meourea@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 18:29:16 by meourea           #+#    #+#              #
#    Updated: 2022/05/23 21:42:16 by meourea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		ex03

CC			=		c++

FLAGS		=		-Wall -Wextra -Werror -std=c++98

SRC			=		main.cpp \
					Bureaucrat.cpp \
					Form.cpp \
					PresidentialPardonForm.cpp \
					RobotomyRequestForm.cpp \
					ShrubberyCreationForm.cpp \
					Intern.cpp

OBJ			=		$(patsubst %.cpp,%.o,$(SRC))

OBJS_DIR	=		objects_deps/

OBJS		=		$(addprefix $(OBJS_DIR), $(OBJ))

DEP			=		$(patsubst %.o,%.d,$(OBJ))

DEPS		=		$(addprefix $(OBJS_DIR), $(DEP))



all				:	$(NAME)

$(NAME)			:	$(OBJS_DIR) $(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)		:
				mkdir -p $(OBJS_DIR)
				
$(OBJS_DIR)%.o	:	%.cpp Makefile
				$(CC) $(FLAGS) -MMD -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

-include	$(DEPS)