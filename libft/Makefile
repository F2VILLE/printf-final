CC = cc
CF = -Wall -Werror -Wextra
NAME = libft.a
SRCS = ./ft_putnbr_fd.c ./ft_putendl_fd.c ./ft_tolower.c ./ft_bzero.c ./ft_putnbr.c ./ft_split.c ./ft_strlcat.c ./ft_strtrim.c ./ft_isdigit.c ./ft_strlen.c ./ft_calloc.c ./ft_substr.c ./ft_striteri.c ./ft_strnstr.c ./ft_putstr_fd.c ./ft_putchar_fd.c ./ft_strncmp.c ./ft_toupper.c ./ft_atoi.c ./ft_memmove.c ./ft_strrchr.c ./ft_isascii.c ./ft_putchar.c ./ft_memchr.c ./ft_strjoin.c ./ft_itoa.c ./ft_memset.c ./ft_memcpy.c ./ft_strlcpy.c ./ft_strdup.c ./ft_memcmp.c ./ft_isalpha.c ./ft_strchr.c ./ft_strmapi.c ./ft_isalnum.c ./ft_isprint.c
BONUS_SRCS = $(SRCS) ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstadd_back.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstiter.c ./ft_lstdelone.c ./ft_lstclear.c ./ft_lstmap.c
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $^

%.o: %.c
	$(CC) $(CF) -c $< -o $@

clean:
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: all clean

bonus: $(BONUS_OBJS) 
	ar rcs $(NAME) $^

.PHONY: all clean fclean re bonus
