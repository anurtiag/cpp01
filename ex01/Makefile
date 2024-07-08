# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 04:38:40 by kali              #+#    #+#              #
#    Updated: 2024/07/08 15:12:53 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	zombie_horde


SRCS			=	main.cpp Zombie.cpp ZombieHorde.cpp


OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++

CFLAGS			=	-Wall -Wextra -Werror -std=c++98

RM				=	rm -rf


all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

%.o:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJ)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re