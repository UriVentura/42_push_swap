# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oventura <oventura@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 11:43:01 by oventura          #+#    #+#              #
#    Updated: 2022/02/02 11:43:01 by oventura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = 	main.c \
		stack.c \
		swap.c \
		push.c \
		rotate.c \
		rotate_rev.c \
		utils.c \
		get_min_max.c \
		get_next_min_max.c \
		insert.c \
		separate.c \
		sort.c \
		steps.c

SRCS_DIR = srcs

OBJS = $(SRCS:.c=.o)
OBJS_DIR = obj

DIRS = obj obj

_SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS))
_OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS))

HEADERS = includes
LIBFT = libft.a
LIBFT_DIR = libft

CC = clang
CFLAGS = -Wall -Werror -Wextra  -I $(LIBFT_DIR) -I $(HEADERS)

all: $(NAME)

$(NAME): $(_OBJS)
	$(CC) $(_OBJS) $(LIBFT_DIR)/$(LIBFT) -o $(NAME)

$(_OBJS): $(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c $(DIRS) $(LIBFT_DIR)/$(LIBFT)
	$(CC) -c $(CFLAGS) $< -o $@

$(DIRS):
	mkdir -p $(DIRS)

clean:
	rm -rf $(DIRS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean:
	rm -rf $(DIRS) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

$(LIBFT_DIR)/$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all
	$(MAKE) -C $(LIBFT_DIR) bonus

re: fclean all

.PHONY: all clean fclean re
