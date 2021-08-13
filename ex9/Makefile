CFLAGS=-Wall -g -o #-std=c99 -Wpedantic -Wextra
CC=gcc
COMMAND= $(CC) $(CFLAGS)

all: ex9 ex9_practice

ex9: ex9.c
	$(COMMAND) ex9 ex9.c

ex9_practice: ex9_practice.c
	$(COMMAND) ex9_practice ex9_practice.c

.PHONY: clean

clean: 
	rm -f ex9 ex9_practice ex9.o ex9_practice.o
	rm -rf ex9.dSYM ex9_practice.dSYM

