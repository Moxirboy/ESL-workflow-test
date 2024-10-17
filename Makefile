CC=gcc
CFLAGS=-Wall

all: test

vector.o: vector.c vector.h
	$(CC) $(CFLAGS) -c vector.c

test: vector.o test.c
	$(CC) $(CFLAGS) -o test test.c vector.o

clean:
	rm -f *.o test
