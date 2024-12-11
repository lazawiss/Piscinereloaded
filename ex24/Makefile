# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzannis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 22:51:09 by lzannis           #+#    #+#              #
#    Updated: 2024/11/09 23:52:56 by lzannis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SOURCE_DIR = srcs/
INCLUDES_DIR = includes/

FILE = ft_putchar.c \
       ft_putstr.c \
       ft_strcmp.c \
       ft_strlen.c \
       ft_swap.c

SOURCE = $(addprefix $(SOURCE_DIR), $(FILE))

OBJET = $(FILE:.c=.o)

AR = ar

CC = cc

CFLAG = -Wall -Wextra -Werror

all: $(LIB)

$(LIB): $(OBJET)
	$(AR) rcs $(LIB) $(OBJET)

%.o: $(SOURCE_DIR)%.c
	$(CC) $(CFLAG) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	rm -f $(OBJET)

fclean:	clean
	rm -f $(LIB)

re:	fclean all
