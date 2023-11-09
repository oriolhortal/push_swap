# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 11:54:11 by ohortal-          #+#    #+#              #
#    Updated: 2023/11/09 11:38:35 by ohortal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = fill_a_to_b.c ft_atol.c ft_stack_input_check.c main.c massive_sort.c reverse_rotate.c rotate.c sort_3.c sort_5.c stack_push.c stack_sort_mov.c stack.c swap.c utils.c

OBJS = $(SOURCE:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -MMD

INCLUDE = -I push_swap.h ./libft/libft.a

NAME = push_swap

DEPS= $(OBJS:.o=.d)

%.o: %.c $(INCLUDE)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

-include $(DEPS)
$(NAME): $(OBJS)
	@make -C ./libft
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

clean :
	@make clean -C ./libft
	@$(RM) $(OBJS) $(DEPS) 

fclean: clean
	@make fclean -C ./libft
	@$(RM) $(NAME)
	@$(RM) checker

re: fclean $(NAME)

.PHONY: all clean fclean re
