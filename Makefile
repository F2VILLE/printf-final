CC = cc
CF = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = ./ft_putnbr.c ./ft_printf.c ./ft_putstr.c ./ft_putchar.c ./ft_putnbr_base_lu.c ./ft_putptr.c
OBJS = ${SRCS:.c=.o}

all: $(NAME) | libft/libft.a

libft/libft.a: 
	cd libft && $(MAKE) all

$(NAME): $(OBJS)
	ar rcs -l:libft/libft.a $(NAME) $^

%.o: %.c
	$(CC) $(CF) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
