# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 13:12:56 by aroualid          #+#    #+#              #
#    Updated: 2023/11/28 17:15:53 by aroualid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memchr.c \
       ft_memcpy.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strncmp.c \
       ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c \
       ft_strlen.c ft_strnstr.c ft_tolower.c ft_putnbr_fd.c \
	   ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c  ft_split.c ft_strjoin.c\
	   ft_substr.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putnbr_base.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
