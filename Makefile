# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefileprueba                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrigal-t <mrigal-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 12:58:45 by mrigal-t          #+#    #+#              #
#    Updated: 2022/12/08 11:20:22 by mrigal-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_tolower.c ft_toupper.c \
	ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_atoi.c ft_calloc.c \
	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c


OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME):
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

so:
	gcc -fPIC -c $(SRC)
	gcc -shared -Wl,-soname,libft.so -o libft.so *.o
.PHONY: all clean fclean re
