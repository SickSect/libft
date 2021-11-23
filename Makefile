NAME = libft.a
SRC = ft_strlen.c \
	ft_strlcat.c \
	ft_isprint.c \
	ft_isascii.c \
	ft_isalnum.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_isdigit.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strjoin.c \
	ft_strdup.c \
	ft_split.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_isalpha.c \
	ft_strncmp.c \
	ft_split.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_strmapi.c \
	ft_putnbr_fd.c \
	ft_striteri.c

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

BONUS_OBJ = $(BONUS:.c=.o)
OBJ = $(SRC:.c=.o)
RM = rm -f

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

%.o : %.c libft.h
	gcc -Wextra -Werror -Wall -c $<

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o : %.c libft.h
		gcc -Wextra -Werror -Wall -c $<

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean re fclean bonus
