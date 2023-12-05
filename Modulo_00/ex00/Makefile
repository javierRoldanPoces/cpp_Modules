NAME =	megaphone

SRC =	megaphone.cpp

OBJT = $(SRC:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror

C++FLAG = -std=c++98

RM = rm -f

#MAKEFLAGS += --quiet

all: $(NAME)

$(NAME): $(OBJT)
	${CC} $(CFLAGS) $(C++FLAG) $(SRC) -o ${NAME}

clean:
	$(RM) $(OBJT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re