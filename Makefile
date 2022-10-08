CC = gcc

SRC = *.c

CFLAGS = -Wall -Werror -Wextra

NAME = b.out

all:
	${CC} ${CFLAGS} -o ${NAME} ${SRC}

clean:
	-rm -f *.o core *.core
