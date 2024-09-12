COMP = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

# Normal
NAME = FirstCanon_advanced
FUNC = main.cpp Fixed.cpp
OBJS = ${FUNC:.cpp=.o}


# Compil
all: 	${NAME}

${NAME}: ${OBJS}
	${COMP} ${CFLAGS} ${OBJS} -o ${NAME}

clean:	
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re