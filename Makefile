# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humanfou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 13:28:50 by humanfou          #+#    #+#              #
#    Updated: 2021/06/02 13:28:52 by humanfou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = clang

CCFLAG = -Wall -Wextra -Werror

LIBFT = -Llibft -lft

SANITIZE = -g -fsanitize=address

HEADERS = -I./includes/ \
		-I./libft/ \
		-I./srcs/utils/ \
		-I./srcs/validate/ \

SRCS_MANDATORY = srcs/driver/push_swap.c \
				srcs/utils/destroy_split.c \
				srcs/utils/exit_prog.c \
				srcs/validate/is_valid_args.c \
				srcs/validate/is_valid_int.c \

OBJS_MANDATORY = $(SRCS_MANDATORY: %.c=%.o)

all: $(NAME)

$(NAME): 	$(OBJS_MANDATORY)
			$(MAKE) --directory=libft
			$(CC) $(CCFLAG) $(HEADERS) $(SANITIZE) -o $@ $^ $(LIBFT)

clean:
	cd libft && $(MAKE) clean
	$(RM) *.o

fclean: clean
	cd libft && $(MAKE) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re