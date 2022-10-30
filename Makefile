# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mikhalil <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/30 15:47:49 by mikhalil      #+#    #+#                  #
#    Updated: 2022/10/30 16:32:02 by mikhalil      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = ft_memcmp.c \
	  ft_strlcpy.c \
	  ft_memcpy.c \
	  ft_strlen.c \
	  ft_atoi.c \
	  ft_memmove.c \
	  ft_strmapi.c \
	  ft_bzero.c \
	  ft_memset.c	\
	  ft_strncmp.c \
	  ft_calloc.c	\
	  ft_putchar_fd.c	\
	  ft_strnstr.c \
	  ft_isalnum.c \
	  ft_putendl_fd.c	\
	  ft_strrchr.c \
	  ft_isalpha.c \
	  ft_putnbr_fd.c \
	  ft_strtrim.c \
	  ft_isascii.c \
	  ft_putstr_fd.c \
	  ft_substr.c \
	  ft_isdigit.c \
	  ft_split.c \
	  ft_tolower.c \
	  ft_isprint.c \
	  ft_strchr.c \
	  ft_toupper.c \
	  ft_itoa.c \
	  ft_strdup.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_memchr.c	\
	  ft_strlcat.c

SRC_BONUS = ft_lstadd_front_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c

ifdef WITH_BONUS
OBJ = $(SRC:.c=.o) $(SRC_BONUS:.c=.o)
else
OBJ = $(SRC:.c=.o)
endif

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -crus $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

bonus:
	$(MAKE) WITH_BONUS=1 all

re: fclean all

.PHONY: all clean fclean re
