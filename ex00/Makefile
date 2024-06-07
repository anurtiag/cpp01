# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 14:33:15 by anurtiag          #+#    #+#              #
#    Updated: 2024/06/07 14:45:05 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	zombie


SRCS			=	main.cpp randomChump.cpp Zombie.cpp newZombie.cpp


OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++

CFLAGS			=	-Wall -Wextra -Werror -std=c++98

RM				=	rm -rf



all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

clean:
				@$(RM) $(OBJ)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re