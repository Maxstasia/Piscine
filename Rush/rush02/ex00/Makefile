# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 10:37:15 by mstasiak          #+#    #+#              #
#    Updated: 2024/10/06 11:01:11 by mstasiak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = check_keys.c check_keys_after99.c convert_number.c ft_rev_tab.c get_value.c groups.c main.c parser.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

ALL: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
