# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kali <kali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 13:06:03 by kali              #+#    #+#              #
#    Updated: 2024/07/17 13:09:12 by kali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook


SRCS			=	main.cpp Bureaucrat.cpp


OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++


CFLAGS			=	-std=c++98 -Wall -Wextra -Werror


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