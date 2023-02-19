NAME = libftprintf.a

SRCS = src/ft_printf.c \
       src/ft_putchar.c \
	   src/ft_puthexa.c \
	   src/ft_putnbr.c \
	   src/ft_putstr.c \
	   src/ft_putunsnbr.c 

OBJS = $(SRCS:src/%.c=obj/%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Printf Done !"

obj/%.o: src/%.c | obj
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -c $< -o $@

obj:
	@mkdir obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
