# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 10:13:53 by framiran          #+#    #+#              #
#    Updated: 2025/05/06 16:15:18 by framiran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = src/ft_printf.c src/ft_print_char.c src/ft_print_str.c src/ft_print_ptr.c \
       src/ft_print_int.c src/ft_print_unsigned.c src/ft_print_hex.c \
       src/ft_handle_format.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iincludes

# regra principal
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# compilar .c para .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
