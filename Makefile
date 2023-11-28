# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 14:25:57 by aroualid          #+#    #+#              #
#    Updated: 2023/11/28 17:16:05 by aroualid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Ilibft

LIBFT_SRCS = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memchr.c \
       ft_memcpy.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strncmp.c \
       ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c \
       ft_strlen.c ft_strnstr.c ft_tolower.c ft_putnbr_fd.c \
	   ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c  ft_split.c ft_strjoin.c\
	   ft_substr.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putnbr_base.c

SRCS = $(addprefix libft/, $(LIBFT_SRCS)) ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)
