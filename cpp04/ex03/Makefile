COMP = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

# Normal
NAME =  Interface_recap
FUNC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
OBJS = $(FUNC:.cpp=.o)


# Compil
all: 	${NAME}

${NAME}: ${OBJS}
	${COMP} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	${COMP} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re