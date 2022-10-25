CC = gcc -c

SRC = *.c

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all:
	${CC} ${CFLAGS} ${SRC} libft.h
	ar -cr ${NAME} *.o

fclean:
	-rm -f *.o core *.core *.gch

clean:
	rm libft.a

