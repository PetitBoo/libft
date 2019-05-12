# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmogo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 15:15:52 by tmogo             #+#    #+#              #
#    Updated: 2019/04/25 21:27:56 by tmogo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
INCLUDES = libft.h
FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS): %.o : %.c
	gcc $(FLAGS) $(patsubst %.o,%.c,$@) -I $(INCLUDES)


clean:
	rm -f ./*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
