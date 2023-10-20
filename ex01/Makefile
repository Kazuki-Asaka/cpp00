SRCS	=	Contact.cpp\
			PhoneBook.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		= clang++

CFLAGS	= -std=c++98
# CFLAGS 	+= -Wall -Wextra -Werror

NAME	= Phonebook

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY:all clean fclean re