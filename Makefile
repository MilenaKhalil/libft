CC = gcc -c

SRC = *.c

CFLAGS = -Wall -Werror -Wextra

NAME = b.out

all:
	${CC} ${CFLAGS} ${SRC} libft.h
	ar r libft.a *.o

fclean:
	-rm -f *.o core *.core *.gch

out:
	./a.out

clean:
	rm libft.a

