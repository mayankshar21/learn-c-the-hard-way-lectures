CFLAGS=-Wall -g -std=c99 -Wpedantic -Wextra
CC=gcc

all: ex8

ex8: ex8_practice.c
	$(CC) $(CFLAGS) -o ex8 ex8_practice.c

.PHONY: clean

clean:
	rm -f ex8 ex8_practice.o
	rm -rf ex8.dSYM
