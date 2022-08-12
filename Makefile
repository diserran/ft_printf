# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 11:35:43 by diserran          #+#    #+#              #
#    Updated: 2022/08/12 09:16:12 by diserran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunsnbr.c \
		ft_puthexa.c

NAME = libftprintf.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = clang

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar rcs $(NAME) $(OBJECTS_PREFIXED)
	@echo "Printf Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
