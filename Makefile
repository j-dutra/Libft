# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 16:04:57 by joluiz-d          #+#    #+#              #
#    Updated: 2021/11/25 22:38:25 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

SRC				=	ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_strlen.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strrchr.c \
					ft_strchr.c \
					ft_strncmp.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c
OBJ				=	$(SRC:.c=.o)
	
HEADER_DIR		=	.
	
CC				=	clang
CFLAGS			=	-Wall -Wextra -Werror

.DEFAULT_GOAL	=	all

all:		$(NAME)

%.o:		%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)

$(NAME):	$(OBJ)
	ar cr $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
