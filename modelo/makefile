CC=gcc

CFLAGS=-O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

all : prog1

prog1 : sentinela.o lista.o prog1.o
	$(CC) sentinela.o lista.o prog1.o -o prog1

prog1.o : prog1.c
	$(CC) $(CFLAGS) prog1.c

lista.o : lista.c lista.h
	$(CC) $(CFLAGS) lista.c

sentinela.o : sentinela.c sentinela.h lista.o
	$(CC) $(CFLAGS) sentinela.c 

clean : 
	rm *.o prog1
