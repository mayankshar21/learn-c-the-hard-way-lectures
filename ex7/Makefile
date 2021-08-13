CFLAGS=-Wall -g -std=c99 -Wpedantic -Wextra
CC=gcc

all: ex7

ex7: ex7_practice.c
	$(CC) $(CFLAGS) -o ex7 ex7_practice.c

.PHONY: clean

clean:
	rm -f ex7 ex7_practice.o
	rm -rf ex7.dSYM