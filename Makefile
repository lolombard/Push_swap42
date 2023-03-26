# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llombard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 11:27:20 by llombard          #+#    #+#              #
#    Updated: 2023/01/21 11:27:24 by llombard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= src/checkers.c \
		src/push_swap.c \
		src/utils.c \
		src/Istruzioni.c \
		src/utils1.c \
		src/inutils.c \
		src/inutils1.c \
		src/checkers1.c \

NAME		=	push_swap
OBJS_DIR	=	objs/
OBJS		=	$(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
CC			=	gcc -g
CC_FLAGS	=	-Wall -Werror -Wextra
DIR_FLAGS	=	libft/libft.a 

$(OBJS_DIR)%.o : %.c src/push_swap.h
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)src
	@$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED) maker
	@$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS) $(DIR_FLAGS)
	
all: $(NAME)

maker :
	@make -C libft

clean:
	@rm -rf $(OBJS_DIR)
	@make clean -C libft

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re

.SILENT:

