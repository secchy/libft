NAME = libft.a 

FUNCTIONS =  ft_itoa \
			ft_split \
			ft_strchr \
			ft_strdup \
			ft_strjoin \
			ft_strlcpy \
			ft_strmapi \
			ft_strnstr \
			ft_strrchr \
			ft_strtrim \
			ft_substr \
			ft_atoi \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_memcmp \
			ft_strncmp \
			ft_tolower \
			ft_toupper \
			ft_strlcat \
			ft_strlen \
			ft_bzero \
			ft_calloc \
			ft_memchr \
			ft_memcpy \
			ft_memmove \
			ft_memset \
			ft_putchar_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_putstr_fd \
			ft_striteri \

BONUSFUNCTIONS = ft_lstsize \
				ft_lstlast \
				ft_lstmap \
				ft_lstnew \
				ft_lstadd_front \
				ft_lstadd_back \
				ft_lstdelone \
				ft_lstclear \
				ft_lstiter \

FILES = $(patsubst %, %.c, $(FUNCTIONS))

OBJECTS = $(patsubst %, %.o, $(FUNCTIONS))

BONUSFILES = $(patsubst %, %_bonus.c, $(BONUSFUNCTIONS))

BONUSOBJECTS = $(patsubst %, %_bonus.o, $(BONUSFUNCTIONS))

CC = cc -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	$(CC) $(FILES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS) $(BONUSOBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: fclean
	$(CC) $(FILES) $(BONUSFILES)
	ar rc $(NAME) $(OBJECTS) $(BONUSOBJECTS)
	ranlib $(NAME)
