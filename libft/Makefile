# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 14:58:27 by jrameau           #+#    #+#              #
#    Updated: 2023/09/25 15:27:29 by mnaschbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -std=c99
SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	        ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	        ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	        ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	        ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJ			= $(SRCS:%.c=%.o)

all: $(NAME)

copy:
	cp -f mfunctions/*.c .
	cp -f afunctions/*.c .
	cp -f extraf/*.c .

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(SRCS)
	gcc $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJ)
	rm -f $(SRCS) # comment this line if you don't want it to remove the source files from the root

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
